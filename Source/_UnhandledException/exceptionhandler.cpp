#include "stdafx.h"

#ifndef __MINIDUMP
#ifndef _DEBUG

#include "pch.h"
#include "BugslayerUtil.h"
#include "CrashHandler.h"
#include "ExceptionHandler.h"
#include "..\_Common\HwOption.h"	// COLA���� include�Ǹ� �ȵ�.

#if defined( __CLIENT ) 
	#include "dpcertified.h"
	#include "dploginclient.h"
	#include "dpclient.h"
	extern	CDPCertified	g_dpCertified;
	extern	CDPLoginClient	g_dpLoginClient;
	extern	CDPClient	g_DPlay;
#endif	// defined( __CLIENT ) 

#ifdef __DBSERVER
	#include "..\_database\DbManager.h"
#endif	// __DBSERVER

#ifdef __CRASH_0404
#include "crashstatus.h"
#endif	// __CRASH_0404


extern BYTE g_hdr, g_Prev;
extern char	g_szVersion[];
extern HANDLE g_hMutex;
static char g_szErrorAdd[ 0x7fff ];
static volatile long s_nRecrvCnt = 0;
extern char   g_szLastFile[];

LONG __stdcall CrashHandlerExceptionFilter( EXCEPTION_POINTERS* pExPtrs);

// ExceptionHandler ����
void	InitEH( void )
{
	SetErrorMode(SetErrorMode(0) |
		SEM_FAILCRITICALERRORS|SEM_NOOPENFILEERRORBOX);
	
	SetUnhandledExceptionFilter(CrashHandlerExceptionFilter);
	memset( g_szErrorAdd, 0, sizeof(g_szErrorAdd) );
}

// �߰� �����ڵ带 ����Ѵ�.
void	_AddErrorMsg( LPCTSTR str, LPCTSTR strHead )
{
	if( str[0] == 0 )	
		return;
	if( strlen( g_szErrorAdd ) >= 0x7fff )
		return;
	strcat( g_szErrorAdd, strHead );		// �޸��忡�� ã�� ���� �̰� ������ ����
	strcat( g_szErrorAdd, str );
	strcat( g_szErrorAdd, "\n" );
}

#ifdef __TRANSFER_ERROR_TEXT

void SendErrorText( const char* pszErrorText )
{
	int len;
	WSADATA	wsd;
	WSAStartup( MAKEWORD( 2, 2 ), &wsd );

	struct sockaddr_in server;
	struct hostent* host	= NULL;
	SOCKET sClient	= socket( AF_INET, SOCK_STREAM, IPPROTO_TCP );
	if( sClient == INVALID_SOCKET )
	{
		OutputDebugString( "SendErrorText:socket - INVALID_SOCKET\n" );
		return;
	}
	server.sin_family	= AF_INET;
	server.sin_port		= htons( 13000 );
	server.sin_addr.s_addr	= inet_addr( ADDR_ACCUMULATOR );
	if( server.sin_addr.s_addr == INADDR_NONE )
	{
		host	= gethostbyname( ADDR_ACCUMULATOR );
		if( host == NULL )
			return;
		CopyMemory( &server.sin_addr, host->h_addr_list[0],
			host->h_length );
	}
	if( connect( sClient, (struct sockaddr *)&server, sizeof(server) ) == SOCKET_ERROR )
		return;

	////////////////////////////////////////////////////////////////////
	//	Send data
	////////////////////////////////////////////////////////////////////
	DWORD dwIndex = 0;		// ACCUMULATOR�� ��ġ��ų ��( - "KOR","CHI","JAP","TWN","THA","ENG" )
	switch( ::GetLanguage() )
	{
	case LANG_JAP: 	dwIndex = 2; break;
	case LANG_THA: 	dwIndex = 4; break;
	case LANG_CHI: 	dwIndex = 1; break;
	case LANG_TWN: 	dwIndex = 3; break;
	case LANG_USA: 	dwIndex = 5; break;
	case LANG_VTN: 	dwIndex = 5; break;
	}
	DWORD dwProtocol = PACKETTYPE_ERROR_TEXT + dwIndex;

#ifdef __CLIENT
	CAr ar;
	ar << dwProtocol; 
	ar.WriteString( g_Neuz.m_szAccount );
	if( CMover::GetActiveMover() )
		ar.WriteString( CMover::GetActiveMover()->GetName() );
	else
		ar.WriteString( "" );
	ar.WriteString( pszErrorText );
#else
	CAr ar;
	ar << dwProtocol; 
	ar.WriteString( "" );
	ar.WriteString( "" );
	ar.WriteString( pszErrorText );
#endif

	BYTE* lpData	= ar.GetBuffer( &len );
	BYTE* buf	= new BYTE[sizeof(DWORD) + 1 + len];
	*buf	= '^';
	*(UNALIGNED DWORD*)&buf[1]	= (DWORD)len;
	memcpy( (void*)&buf[sizeof(DWORD) + 1], lpData, len );

	send( sClient, (const char*)buf, len + sizeof(DWORD) + 1, 0 );
	closesocket( sClient );
	safe_delete_array( buf );
}
#endif	// __TRANSFER_ERROR_TEXT

extern char g_szCrashClient[1024];

LONG __stdcall CrashHandlerExceptionFilter( EXCEPTION_POINTERS* pExPtrs )
{
	LONG lRet;
	if( InterlockedIncrement( &s_nRecrvCnt ) >= 3 )
		return EXCEPTION_CONTINUE_SEARCH;

	// ����� ��� �϶����� �߰� ������ �������� �ʰ�
	// EXCEPTION_CONTINUE_SEARCH  ���� ���������ν�
	// ���α׷��Ӱ� ����� �� �� �ֵ��� �Ѵ�.
#ifdef _DEBUG
	lRet = EXCEPTION_CONTINUE_SEARCH ;
	return lRet;
#else
	lRet = EXCEPTION_EXECUTE_HANDLER;
#endif
	
	// �� �׾����� �˾Ƴ����� �մϴ�.
	char szReason[ 1024*16 ] = {0, };
#ifdef __CLIENT
	sprintf( szReason, "%s rCnt=%d\r\n%s", g_szVersion, s_nRecrvCnt, GetFaultReason(pExPtrs) );
#else
	sprintf( szReason, "rCnt=%d \r\n%s", s_nRecrvCnt, GetFaultReason(pExPtrs) );
#endif

#ifdef __CRASH_0404
	CCrashStatus::GetInstance()->PrintStatus();		// cache server only
#endif	// __CRASH_0404

#ifdef __WORLDSERVER
	#if !defined(__REMOVE_SCIRPT_060712)
		char szLatestDialog[512]	= { 0, };
		sprintf( szLatestDialog, "\n\nlatest dialog : %s\t%s\t%s\t%s\n", CScriptDialog::s_pszName, CScriptDialog::s_pszKey, CScriptDialog::s_pszBeforeRun, CScriptDialog::s_pszAfterRun );
		strcat( szReason, szLatestDialog );
	#endif
#endif	// __WORLDSERVER

	strcat( szReason, "\n\n - Registers\n\n" );
	strcat( szReason, GetRegisterString(pExPtrs) );
	
#ifdef __CLIENT
	DWORD	dwOp = GSTSO_MODULE | GSTSO_SYMBOL;
#else
	DWORD	dwOp = GSTSO_PARAMS | GSTSO_MODULE | GSTSO_SYMBOL | GSTSO_SRCLINE;
#endif
	
	LPCTSTR szPtr = GetFirstStackTraceString( dwOp, pExPtrs);
	strcat( szReason, "\n\n" );
	if( szPtr )
		strcat( szReason, szPtr );
	else
		strcat( szReason, "(null)" );
	while(1)
	{
		szPtr = GetNextStackTraceString( dwOp, pExPtrs);
		if( szPtr == NULL )		
			break;
		strcat( szReason, "\n" );
		strcat( szReason, szPtr );
	}
	
#ifdef __DBSERVER
	{
		char szTemp[MAX_PLAYER+2]	= { 0, };

		sprintf( szTemp, "\r\n// %d", g_DbManager.m_nJoin );
		strcat( szReason, szTemp );

		for( int i = 0; i < MAX_JOIN_SIZE; i++ )
		{
			sprintf( szTemp, "\r\n%s", g_DbManager.m_aszJoin[i] );
			strcat( szReason, szTemp );
		}
	}
#endif	// __DBSERVER

	Error( "%s", szReason);
	strcat( szReason, "\n" );
	strcat( szReason, g_szErrorAdd );

#ifdef 	__CLIENT
	{
		char szPacket[512] = {0, };	// ������ ��Ŷ�� �α׿� �߰���.
		sprintf( szPacket, "0x%02x:0x%02x-", g_hdr, g_Prev );
		strcat( szReason, szPacket );

		sprintf( szPacket, "YS%d %d %d-", g_Error_State.m_dwWndId, g_Error_State.m_bIsShowWnd, (int)g_Error_State.m_ch );
		strcat( szReason, szPacket );

		sprintf( szPacket, "last Model:%s", g_szLastFile );
		strcat( szReason, szPacket );
	}

	if( g_DPlay.m_pDump != NULL && ( 8192 - lstrlen( szReason ) ) > ( g_DPlay.m_nDumpSize * 2 ) )
	{
		strcat( szReason, "\r\ndump\r\n" );
		char s[8];
		for( int i = 0; i < g_DPlay.m_nDumpSize; i++ )
		{
			sprintf( s, "%02x", g_DPlay.m_pDump[i] );
			lstrcat( szReason, s );
		}
	}
#endif	// __CLIENT
	
#if defined( __CLIENT ) // Ŭ���̾�Ʈ�� �̱۽������̹Ƿ� ���ڵ尡 ������ �� �ʹ�.
	g_dpCertified.DeleteDPObject();
	g_DPlay.DeleteDPObject();
	g_dpLoginClient.DeleteDPObject();
#endif	// defined( __CLIENT ) 

#ifdef __TRANSFER_ERROR_TEXT
	strcat( szReason, g_szCrashClient );
	SendErrorText( szReason );
#endif	// __TRANSFER_ERROR_TEXT
	
#ifdef __CLIENT
	if( g_hMutex )
		CloseHandle( g_hMutex );
#endif	// __CLIENT

	return lRet;
}

#endif // not debug
#endif // __MINIDUMP