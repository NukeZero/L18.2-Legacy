#ifndef __VERSION_COMMON_H__
#define __VERSION_COMMON_H__
#define __MAINSERVER
#define	__VER 19

#if !defined( __TESTSERVER ) && !defined( __MAINSERVER )
	#define __INTERNALSERVER
#endif

#define		__SERVER				// Ŭ���̾�Ʈ �����ڵ带 �������� �ʱ� ���� define
//#define	__S0114_RELOADPRO		// ĳ���� DB���� �о���� : Neuz, Trans, login, World, Certifier, Account( ini : SKIP_TRACKING �߰� )
#define		__STL_0402		// stl

#if (_MSC_VER > 1200)
#define		__VS2003
#if (_MSC_VER >= 1600) // __VC100
#pragma warning ( disable : 4995 )
#pragma warning ( disable : 4996 )
#endif // __VC100
#endif

// 08-01-22
#define	__GPAUTH_01		// ����/������ ���� ����
#define	__GPAUTH_02		// ����/������ ���� ���� - ����
#define	__EUROPE_0514

// 11th
#define __LOG_PLAYERCOUNT_CHANNEL // ä�κ� ���� �α� 

#define	__REMOVE_PLAYER_0221		// ĳ���� ���� ��Ŷ ����

#define __RT_1025

// 14th
//	#define __PCBANG			// PC�� ����



#if	  defined(__INTERNALSERVER)	// ���� �繫�� �׽�Ʈ���� 
	#define	__SECURITY_0628	// ���ҽ� ���� ����

#elif defined(__TESTSERVER)		// �ܺ� ���� �׽�Ʈ���� 

#elif defined(__MAINSERVER)		// �ܺ� ����


#endif	// end - ���������� define 

#endif	// __VERSION_COMMON_H__