// Borna_Print.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "Borna_Print.h"
#include "Borna_PrintDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CBorna_PrintApp

BEGIN_MESSAGE_MAP(CBorna_PrintApp, CWinApp)
END_MESSAGE_MAP()


// CBorna_PrintApp construction
CBorna_PrintApp::CBorna_PrintApp()
	: CWinApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}


// The one and only CBorna_PrintApp object
CBorna_PrintApp theApp;

// CBorna_PrintApp initialization

BOOL CBorna_PrintApp::InitInstance()
{

	// Standard initialization
	// If you are not using these features and wish to reduce the size
	// of your final executable, you should remove from the following
	// the specific initialization routines you do not need
	// Change the registry key under which our settings are stored
	// TODO: You should modify this string to be something appropriate
	// such as the name of your company or organization
	SetRegistryKey(_T("Local AppWizard-Generated Applications"));

	CBorna_PrintDlg dlg;
	m_pMainWnd = &dlg;
	INT_PTR nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
		// TODO: Place code here to handle when the dialog is
		//  dismissed with OK
	}

	// Since the dialog has been closed, return FALSE so that we exit the
	//  application, rather than start the application's message pump.
	return FALSE;
}
