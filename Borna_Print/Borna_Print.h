// Borna_Print.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#ifdef STANDARDSHELL_UI_MODEL
#include "resource.h"
#endif

// CBorna_PrintApp:
// See Borna_Print.cpp for the implementation of this class
//

class CBorna_PrintApp : public CWinApp
{
public:
	CBorna_PrintApp();
	
// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CBorna_PrintApp theApp;
