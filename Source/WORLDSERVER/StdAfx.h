// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//      are changed infrequently
//

#define POINTER_64 __ptr64
#define _USE_32BIT_TIME_T

#if !defined(AFX_STDAFX_H__A9DB83DB_A9FD_11D0_BFD1_444553540000__INCLUDED_)
#define AFX_STDAFX_H__A9DB83DB_A9FD_11D0_BFD1_444553540000__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define WIN32_LEAN_AND_MEAN		// Exclude rarely-used stuff from Windows headers
#pragma warning(disable:4018 4244 4786)
#pragma component(browser, off, references)

#pragma once   // Include this header file once per compilation unit

#define _WIN32_WINNT 0x0501
#define	WINVER	0x0501

#define __WORLDSERVER

#include <afxwin.h>

#include <AFXTEMPL.H>
#include <process.h>
#include <basetsd.h> 

#include <vector>
#include <string>
#include <map>
#include <queue>
#include <set>
using namespace std;

#include <afxdisp.h>        // MFC Automation classes

#include <d3d9.h>
#include <dxerr9.h>
#include <dshow.h>
#include <strmif.h>
#include <control.h>
#include <d3dx9math.h>

#include "VersionCommon.h"
#include "LodeConfig.h"
#include "memtrace.h"
#ifdef __MEM_TRACE
#ifndef _DEBUG
#define	new	MT_NEW
#endif	// _DEBUG
#endif	// __MEM_TRACE
#include "DefineCommon.h"
#include "CmnHdr.h"
#include "chassert.h"
#include "Authorization.h"
#include "File.h"
#include "MoverMsg.h"

#include "d3dfile.h"
#include "d3dfont.h"
#include "d3dutil.h"
#include "dxutil.h"
#include "vutil.h"
#include "dsutil.h"

#include "debug.h"
#include "Define.h"
#include "DefineAttribute.h"
#include "DefineItemKind.h"
#if __VER >= 18
#include "defineItemGrade.h"
#include "defineItemType.h"
#endif
#include "DefineJob.h"
#include "DefineWorld.h"

#include "Data.h"
#include "Timer.h"
#include "patch.h"
#include "Path.h"
#include "Scanner.h"
#include "ScriptDialog.h"
#include "Script.h"
#include "Project.h"
#include "landscape.h"
#include "XUtil.h"
#include "XUtil3d.h"

// Model
#include "Model.h"
#include "Bone.h"
#include "Object3d.h"
#include "ModelObject.h"
#include "ModelGlobal.h"
#include "ModelMng.h"

// object
#include "Obj.h"
#include "Ctrl.h"
#include "Item.h"
#include "Mover.h"  
#include "Region.h"
#include "Weather.h"
#include "World.h"

// ai
#include "..\_AIInterface\AIInterface.h"
#include "..\_AIInterface\AIMonster.h"
#include "..\_AIInterface\Action.h"
#include "..\_AIInterface\ActionMover.h"

#include "CreateObj.h"
#include "tickcount.h"
#include "flyffevent.h"
#include "buyinginfo.h"

extern	CProject	prj;
extern	CTickCount	g_TickCount;
extern	u_long		g_uIdofMulti;
extern	CGameTimer	g_GameTimer;
extern	CFlyffEvent	g_eLocal;
extern ADDSMMODE	g_AddSMMode;
extern	ULONG		g_uKey;
extern DWORD		g_tmCurrent;		// �������� ����� ���� �ð�.
extern int			g_nProcessCnt;	// ���μ������� �ϳ��� ī��Ʈ �Ǵ� ����.
extern int			g_nRenderCnt;	// ����ȭ�鶧���� �ϳ��� ī��Ʈ �Ǵ� ����

#if __VER >= 11 // __GUILD_COMBAT_1TO1
#include "GuildCombat1to1.h"
extern CGuildCombat1to1Mng	g_GuildCombat1to1Mng;
#endif // __GUILD_COMBAT_1TO1

int (WINAPIV * __vsnwprintf)(wchar_t *, size_t, const wchar_t*, va_list) = _vsnwprintf;
int (WINAPIV * __vsnprintf)(char *, size_t, const char*, va_list) = _vsnprintf;

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__A9DB83DB_A9FD_11D0_BFD1_444553540000__INCLUDED_)
