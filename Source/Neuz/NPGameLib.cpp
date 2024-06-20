#include "stdafx.h"
#include "timer.h"
#include "NPGameLib4.h"

//#ifdef __NPROTECT_VER
	#pragma comment( lib, "./npkcrypt.lib" )	
	#pragma comment( lib, "./NPGameLib4.lib" )
//#endif	


static char*	g_szNPGKey = "";
static	CTimer	g_timer( SEC( 10 ) );

void PreInitNProtect()
{
	switch( ::GetLanguage() )
	{
	case LANG_KOR:
		g_szNPGKey = "Flyff";
		break;
#ifdef __NO_SUB_LANG
	case LANG_USA:
		g_szNPGKey = "FlyffENG";
		break;
#else // __NO_SUB_LANG
	case LANG_ENG:
		if( ::GetSubLanguage() == LANG_SUB_USA )
		{
			g_szNPGKey = "FlyffENG";
		}
		else if( ::GetSubLanguage() == LANG_SUB_IND )
		{
			g_szNPGKey = "FlyffIND";
		}
		else
		{
			if( lstrcmp( g_Neuz.m_lpCertifierAddr, "125.5.127.16" ) == 0 )	// �׽�Ʈ
				g_szNPGKey	= "FlyffPHTest";
			else
				g_szNPGKey = "FlyffPH";
		}
		break;
#endif // __NO_SUB_LANG
	case LANG_JAP:
		g_szNPGKey = "FlyffJP";		// ���� ������� �ʰ� �ִ�.
		break;
	case LANG_CHI:
	case LANG_TWN:
		{
			if( lstrcmp( g_Neuz.m_lpCertifierAddr, "210.242.174.100" ) == 0 )		// �׽�Ʈ
				g_szNPGKey = "FlyffTWTest";
			else	// ����
				g_szNPGKey = "FlyffTW";
		}
		break;
	case LANG_HK:
		{
			if( lstrcmp( g_Neuz.m_lpCertifierAddr, "203.174.49.231" ) == 0 )		// ���� ����
				g_szNPGKey = "FlyffHK";
			else	// �׽�Ʈ ����
				g_szNPGKey = "FlyffHKTest";
		}
		break;
	case LANG_THA:
		g_szNPGKey = "FlyffTH";
		break;
	case LANG_GER:
		{
			if( lstrcmp( g_Neuz.m_lpCertifierAddr, "195.59.138.10" ) == 0 )		// ���� ����
				g_szNPGKey = "FlyffEU";
			else	// �׽�Ʈ ����
				g_szNPGKey = "FlyffEUTest";
		}
		break;
	case LANG_SPA:
		{
		//	mulcom	BEGIN100419 ����Ͻ� ���� NPGKey ����.
//			g_szNPGKey = "FlyffSP";
			g_szNPGKey = "FlyffES";
		//	mulcom	END100419	����Ͻ� ���� NPGKey ����.
		}
		break;
	case LANG_POR:
		{
			if( lstrcmp( g_Neuz.m_lpCertifierAddr, "204.2.134.191" ) == 0 )		// ���� ����
				g_szNPGKey = "FlyffBR";
			else	// �׽�Ʈ ����
				g_szNPGKey = "FlyffBRTest";
		}
		break;
	case LANG_FRE:
		{
			if( lstrcmp( g_Neuz.m_lpCertifierAddr, "195.59.138.5" ) == 0 )		// ���� ����
				g_szNPGKey = "FlyffEU";
			else	// �׽�Ʈ ����
				g_szNPGKey = "FlyffEUTest";
		}
		break;
	case LANG_VTN:
		g_szNPGKey = "FlyffVT";
		break;
	case LANG_RUS:
		g_szNPGKey = "FlyffRUS";
		break;
	}
}

CNPGameLib* GetNProtect()
{
	static CNPGameLib npgl( g_szNPGKey );

	return &npgl;
}

BOOL CheckNProtect()
{
	if( g_timer.IsOver() )
	{
		g_timer.Reset();
		return ( GetNProtect()->Check() == NPGAMEMON_SUCCESS );
	}

	return TRUE;
}