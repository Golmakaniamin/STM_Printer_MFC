// Borna_PrintDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Borna_Print.h"
#include "Borna_PrintDlg.h"
#include "PRN_DLL.h"

#include <iostream>
#include <fstream>
#include <string>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

char Amin_coding[255];
char Amin_p_jomle[41];

using namespace std;

// CBorna_PrintDlg dialog

CBorna_PrintDlg::CBorna_PrintDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CBorna_PrintDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CBorna_PrintDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CBorna_PrintDlg, CDialog)
#if defined(_DEVICE_RESOLUTION_AWARE) && !defined(WIN32_PLATFORM_WFSP)
	ON_WM_SIZE()
#endif
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_BUTTON1, &CBorna_PrintDlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// CBorna_PrintDlg message handlers

BOOL CBorna_PrintDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

#if defined(_DEVICE_RESOLUTION_AWARE) && !defined(WIN32_PLATFORM_WFSP)
void CBorna_PrintDlg::OnSize(UINT /*nType*/, int /*cx*/, int /*cy*/)
{
	if (AfxIsDRAEnabled())
	{
		DRA::RelayoutDialog(
			AfxGetResourceHandle(), 
			this->m_hWnd, 
			DRA::GetDisplayMode() != DRA::Portrait ? 
			MAKEINTRESOURCE(IDD_BORNA_PRINT_DIALOG_WIDE) : 
			MAKEINTRESOURCE(IDD_BORNA_PRINT_DIALOG));
	}
}
#endif

void amin_clean()
{
	for (int q = 0 ; q <= 255 ; q++)
		Amin_coding[q] = 127;
}

void amin_start()
{
	amin_clean();

	Amin_coding[45] = '-';
	Amin_coding[47] = '/';
	Amin_coding[58] = ':';
	Amin_coding[127] = ' ';
	Amin_coding[128] = '0';
	Amin_coding[129] = '1';
	Amin_coding[130] = '2';
	Amin_coding[131] = '3';
	Amin_coding[132] = '4';
	Amin_coding[133] = '5';
	Amin_coding[134] = '6';
	Amin_coding[135] = '7';
	Amin_coding[136] = '8';
	Amin_coding[137] = '9';
	Amin_coding[140] = '?';
	Amin_coding[141] = 'آ';
	Amin_coding[144] = 'ا';
	Amin_coding[147] = 'ب';
	Amin_coding[149] = 'پ';
	Amin_coding[151] = 'ت';
	Amin_coding[153] = 'ث';
	Amin_coding[155] = 'ج';
	Amin_coding[157] = 'چ';
	Amin_coding[159] = 'ح';
	Amin_coding[161] = 'خ';
	Amin_coding[162] = 'د';
	Amin_coding[163] = 'ذ';
	Amin_coding[164] = 'ر';
	Amin_coding[165] = 'ز';
	Amin_coding[166] = 'ژ';
	Amin_coding[168] = 'س';
	Amin_coding[170] = 'ش';
	Amin_coding[172] = 'ص';
	Amin_coding[174] = 'ض';
	Amin_coding[175] = 'ط';
	Amin_coding[224] = 'ظ';
	Amin_coding[228] = 'ع';
	Amin_coding[232] = 'غ';
	Amin_coding[234] = 'ف';
	Amin_coding[236] = 'ق';
	Amin_coding[238] = 'ک';
	Amin_coding[240] = 'گ';
	Amin_coding[243] = 'ل';
	Amin_coding[245] = 'م';
	Amin_coding[247] = 'ن';
	Amin_coding[248] = 'و';
	Amin_coding[251] = 'ه';
	Amin_coding[254] = 'ي';
}

void amin_mid()
{
	amin_clean();

	Amin_coding[45] = '-';
	Amin_coding[47] = '/';
	Amin_coding[58] = ':';
	Amin_coding[127] = ' ';
	Amin_coding[128] = '0';
	Amin_coding[129] = '1';
	Amin_coding[130] = '2';
	Amin_coding[131] = '3';
	Amin_coding[132] = '4';
	Amin_coding[133] = '5';
	Amin_coding[134] = '6';
	Amin_coding[135] = '7';
	Amin_coding[136] = '8';
	Amin_coding[137] = '9';
	Amin_coding[140] = '?';
	Amin_coding[141] = 'آ';
	Amin_coding[145] = 'ا';
	Amin_coding[147] = 'ب';
	Amin_coding[149] = 'پ';
	Amin_coding[151] = 'ت';
	Amin_coding[153] = 'ث';
	Amin_coding[155] = 'ج';
	Amin_coding[157] = 'چ';
	Amin_coding[159] = 'ح';
	Amin_coding[161] = 'خ';
	Amin_coding[162] = 'د';
	Amin_coding[163] = 'ذ';
	Amin_coding[164] = 'ر';
	Amin_coding[165] = 'ز';
	Amin_coding[166] = 'ژ';
	Amin_coding[168] = 'س';
	Amin_coding[170] = 'ش';
	Amin_coding[172] = 'ص';
	Amin_coding[174] = 'ض';
	Amin_coding[175] = 'ط';
	Amin_coding[224] = 'ظ';
	Amin_coding[227] = 'ع';
	Amin_coding[231] = 'غ';
	Amin_coding[234] = 'ف';
	Amin_coding[236] = 'ق';
	Amin_coding[238] = 'ک';
	Amin_coding[240] = 'گ';
	Amin_coding[243] = 'ل';
	Amin_coding[245] = 'م';
	Amin_coding[247] = 'ن';
	Amin_coding[248] = 'و';
	Amin_coding[250] = 'ه';
	Amin_coding[254] = 'ي';
}

void amin_end()
{
	amin_clean();

	Amin_coding[45] = '-';
	Amin_coding[47] = '/';
	Amin_coding[58] = ':';
	Amin_coding[127] = ' ';
	Amin_coding[128] = '0';
	Amin_coding[129] = '1';
	Amin_coding[130] = '2';
	Amin_coding[131] = '3';
	Amin_coding[132] = '4';
	Amin_coding[133] = '5';
	Amin_coding[134] = '6';
	Amin_coding[135] = '7';
	Amin_coding[136] = '8';
	Amin_coding[137] = '9';
	Amin_coding[140] = '?';
	Amin_coding[141] = 'آ';
	Amin_coding[145] = 'ا';
	Amin_coding[146] = 'ب';
	Amin_coding[148] = 'پ';
	Amin_coding[150] = 'ت';
	Amin_coding[152] = 'ث';
	Amin_coding[154] = 'ج';
	Amin_coding[156] = 'چ';
	Amin_coding[158] = 'ح';
	Amin_coding[160] = 'خ';
	Amin_coding[162] = 'د';
	Amin_coding[163] = 'ذ';
	Amin_coding[164] = 'ر';
	Amin_coding[165] = 'ز';
	Amin_coding[166] = 'ژ';
	Amin_coding[167] = 'س';
	Amin_coding[169] = 'ش';
	Amin_coding[171] = 'ص';
	Amin_coding[173] = 'ض';
	Amin_coding[175] = 'ط';
	Amin_coding[224] = 'ظ';
	Amin_coding[225] = 'ع';
	Amin_coding[229] = 'غ';
	Amin_coding[233] = 'ف';
	Amin_coding[235] = 'ق';
	Amin_coding[237] = 'ک';
	Amin_coding[239] = 'گ';
	Amin_coding[241] = 'ل';
	Amin_coding[244] = 'م';
	Amin_coding[246] = 'ن';
	Amin_coding[248] = 'و';
	Amin_coding[249] = 'ه';
	Amin_coding[253] = 'ي';
}

bool amin_change_to_persian(char main_char[])
{
	for (int q = 0 ; q < 41 ; q++)
		Amin_p_jomle[q] = 127;
	
	for (int q = 0 ; q < strlen(main_char) ; q++)
	{
		if (q == 0)
			amin_start();

		else if (((q < strlen(main_char) && (main_char[q+1] != ' '))) && (q != (strlen(main_char) - 1)))
			amin_mid();

		else if ((q == (strlen(main_char) - 1)) || (main_char[q+1] == ' '))
			amin_end();

		for (int w = 0 ; w <= 255 ; w++)
		{
			if (main_char[q] == Amin_coding[w])
			{
				Amin_p_jomle[(41 - q)] = w;
			}
		}
	}
	return(TRUE);
}

void amin_Hiva_Prn()
{
	if(PRINTER_OK != PrinterOpen())
	{
//		MessageBox(L"[Error] PrinterOpen"); 
		return;
	}

	PrinterSetCodeTable(27);

	int a_pos[9];
	int a_pos_counter = 1;
	char buffer[200];

	a_pos[0]=-1;

    ifstream myFile1 ("\\Program Files\\Borna\\cp.txt", ios::in | ios::binary);
    myFile1.read (buffer, 200);
    if (!myFile1.read (buffer, 200)) 
		for (int q = 1 ; q < strlen(buffer) ; q++)
			if (buffer[q] == ',')
			{
				a_pos[a_pos_counter]=q;
				a_pos_counter++;
			}

	////
	char amin_Prnt_char1_1[] = "تاريخ و ساعت : ";
	char amin_File_char1_1[25];
	for (int q = 0 ; q < 25 ; q++)
		amin_File_char1_1[q] = ' ';

	for (int q = (a_pos[0] + 1) ; q < a_pos[1] ; q++)
		amin_File_char1_1[(24 - (q - a_pos[0] - 1))] = buffer[q];
	amin_File_char1_1[25] = '\0';

	////
	char amin_Prnt_char2_1[] = "شماره قبض : ";
	char amin_File_char2_1[13];
	for (int q = 0 ; q < 13 ; q++)
		amin_File_char2_1[q] = ' ';

	for (int q = (a_pos[1] + 1) ; q < a_pos[2] ; q++)
		amin_File_char2_1[(12 - (q - a_pos[1] - 1))] = buffer[q];
	amin_File_char2_1[13] = '\0';

	////
	char amin_Prnt_char3[] = "مبلغ : ";
	char amin_Prnt_char3_1[] = " تومان";
	char amin_File_char3[15];
	for (int q = 0 ; q < 15 ; q++)
		amin_File_char3[q] = ' ';

	for (int q = (a_pos[2] + 1) ; q < a_pos[3] ; q++)
		amin_File_char3[(14 - (q - a_pos[2] - 1))] = buffer[q];
	amin_File_char3[15] = '\0';

	////
	char amin_Prnt_char4[] = "سرفصل : ";
	char amin_File_char4[30];
	for (int q = 0 ; q < 30 ; q++)
		amin_File_char4[q] = ' ';

	for (int q = (a_pos[3] + 1) ; q < a_pos[4] ; q++)
		amin_File_char4[(q - a_pos[3] - 1)] = buffer[q];
	amin_File_char4[30] = '\0';

	////
	char amin_Prnt_char5[] = "تخليه گر : ";
	char amin_File_char5[25];
	for (int q = 0 ; q < 25 ; q++)
		amin_File_char5[q] = ' ';

	for (int q = (a_pos[4] + 1) ; q < a_pos[5] ; q++)
		amin_File_char5[(q - a_pos[4] - 1)] = buffer[q];
	amin_File_char5[25] = '\0';

	////
	char amin_Prnt_char6[] = "شماره صندوق : ";
	char amin_File_char6[15];
	for (int q = 0 ; q < 15 ; q++)
		amin_File_char6[q] = ' ';

	for (int q = (a_pos[5] + 1) ; q < a_pos[6] ; q++)
		amin_File_char6[(14 - (q - a_pos[5] - 1))] = buffer[q];
	amin_File_char6[15] = '\0';

	////
	char amin_Prnt_char7[] = "مشترک : ";
	char amin_File_char7[25];
	for (int q = 0 ; q < 25 ; q++)
		amin_File_char7[q] = ' ';

	for (int q = (a_pos[6] + 1) ; q < a_pos[7] ; q++)
		amin_File_char7[(q - a_pos[6] - 1)] = buffer[q];
	amin_File_char7[25] = '\0';

	if(PRINTER_OK != PrinterLoadImageFile( L"\\Program Files\\Borna\\Arm.bmp" ))
	{
//		MessageBox(L"[Error] PrinterLoadImageFile"); 
		PrinterClose(); 
		return;
	}

	PrinterImage(PRINTER_IMAGE_NORMAL);
    PrinterWaitComplete();
	PrinterCloseImageFile();

	PrinterSetAlign(PRINTER_ALIGN_CENTER);
	PrinterSetFontSize(PRINTER_FONT_NORMAL,PRINTER_FONT_NORMAL);

	PrinterSetFontSize(PRINTER_FONT_DOUBLEWIDTH,PRINTER_FONT_DOUBLEHEIGHT);
	char amin_prn_7[41];
	amin_prn_7[0]='\0';
	strcat(amin_prn_7,amin_Prnt_char7);
    strcat(amin_prn_7,amin_File_char7);
    if (amin_change_to_persian(amin_prn_7) == TRUE)
	    PrinterPrint2(Amin_p_jomle);

	PrinterSetFontSize(PRINTER_FONT_NORMAL,PRINTER_FONT_NORMAL);
	PrinterPrint(L"\n");
	PrinterPrint(L"--------------------------------\n");
	PrinterPrint(L"\n");

	char amin_prn_6[41];
	amin_prn_6[0]='\0';
	strcat(amin_prn_6,amin_Prnt_char6);
    strcat(amin_prn_6,amin_File_char6);
    if (amin_change_to_persian(amin_prn_6) == TRUE)
	    PrinterPrint2(Amin_p_jomle);

	PrinterPrint(L"\n");
	PrinterPrint(L"\n");

	char amin_prn_3[41];
	amin_prn_3[0]='\0';
	strcat(amin_prn_3,amin_Prnt_char3);
    strcat(amin_prn_3,amin_File_char3);
	strcat(amin_prn_3,amin_Prnt_char3_1);
    if (amin_change_to_persian(amin_prn_3) == TRUE)
	    PrinterPrint2(Amin_p_jomle);

	PrinterPrint(L"\n");
	PrinterPrint(L"\n");

	char amin_prn_4[41];
	amin_prn_4[0]='\0';
	strcat(amin_prn_4,amin_Prnt_char4);
    strcat(amin_prn_4,amin_File_char4);
    if (amin_change_to_persian(amin_prn_4) == TRUE)
	    PrinterPrint2(Amin_p_jomle);

	PrinterPrint(L"\n");
	PrinterPrint(L"\n");

	char amin_prn_5[41];
	amin_prn_5[0]='\0';
	strcat(amin_prn_5,amin_Prnt_char5);
    strcat(amin_prn_5,amin_File_char5);
    if (amin_change_to_persian(amin_prn_5) == TRUE)
	    PrinterPrint2(Amin_p_jomle);

	PrinterPrint(L"\n");
	PrinterPrint(L"\n");

	char amin_prn_2[41];
	amin_prn_2[0]='\0';
	strcat(amin_prn_2,amin_Prnt_char2_1);
    strcat(amin_prn_2,amin_File_char2_1);
    if (amin_change_to_persian(amin_prn_2) == TRUE)
	    PrinterPrint2(Amin_p_jomle);

	PrinterPrint(L"\n");
	PrinterPrint(L"\n");

	char amin_prn_1[41];
	amin_prn_1[0]='\0';
	strcat(amin_prn_1,amin_Prnt_char1_1);
    strcat(amin_prn_1,amin_File_char1_1);
    if (amin_change_to_persian(amin_prn_1) == TRUE)
	    PrinterPrint2(Amin_p_jomle);

	PrinterLineFeed(3);
	PrinterWaitComplete();

	TCHAR amin_barcode[15];
	for (int q = 0 ; q < 13 ; q++)
	{
		amin_barcode[q] = amin_File_char2_1[(12 - q)];
	}

	amin_barcode[13]='0';
	amin_barcode[14]='\0';
	PrinterSetBarcodeText(PRINTER_BARCODE_POSITION_BELOW);
	PrinterSetBarCodeWidth(PRINTER_BARCODE_WIDTH_HALF);
	PrinterSetBarCodeHeight(50);
	PrinterSetAlign(PRINTER_ALIGN_CENTER);

	PrinterBarcodeW(PRINTER_BARCODE_W_CODE128,15,amin_barcode);

	PrinterLineFeed(3);
	PrinterWaitComplete();
	PrinterClose();
}

void ExitMFCApp()
   {
        // same as double-clicking on main window close box
        ASSERT(AfxGetMainWnd() != NULL);
        AfxGetMainWnd()->SendMessage(WM_CLOSE);
   }
		
void CBorna_PrintDlg::OnBnClickedButton1()
{
	//IDC_BUTTON1.EnableWindow(FALSE);
	amin_Hiva_Prn();
	ExitMFCApp();
}
