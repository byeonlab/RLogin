#pragma once
#include "afxcmn.h"
#include "afxwin.h"

#define	EXTFILEDLG_DOWNLOAD	1
#define	EXTFILEDLG_UPLOAD	2

//////////////////////////////////////////////////////////////////////

class CFileDownPage : public CDialog
{
	DECLARE_DYNAMIC(CFileDownPage)

public:
	class CFileUpDown *m_pUpDown;

	int m_DownMode;
	CString m_DownFrom;
	CString m_DownTo;
	int m_DecMode;
	BOOL m_bDownWait;
	int m_DownSec;
	BOOL m_bDownCrLf;
	int m_DownCrLfMode;
	BOOL m_bWithEcho;

	CFileDownPage();
	virtual ~CFileDownPage();

	enum { IDD = IDD_FILEDOWNDLG };

public:
	virtual BOOL OnApply();

protected:
	virtual BOOL OnInitDialog();
	virtual void DoDataExchange(CDataExchange* pDX);

public:
	DECLARE_MESSAGE_MAP()
};

//////////////////////////////////////////////////////////////////////

class CFileUpConvPage : public CDialog
{
	DECLARE_DYNAMIC(CFileUpConvPage)

public:
	class CFileUpDown *m_pUpDown;

	int m_UpMode;
	BOOL m_UpCrLf;
	CString m_UpFrom;
	CString m_UpTo;
	int m_EncMode;
	int m_UpCrLfMode;

	CFileUpConvPage();
	virtual ~CFileUpConvPage();

	enum { IDD = IDD_FILEUPCONVDLG };

public:
	virtual BOOL OnApply();

protected:
	virtual BOOL OnInitDialog();
	virtual void DoDataExchange(CDataExchange* pDX);

public:
	DECLARE_MESSAGE_MAP()
};

//////////////////////////////////////////////////////////////////////

class CFileUpSendPage : public CDialog
{
	DECLARE_DYNAMIC(CFileUpSendPage)

public:
	class CFileUpDown *m_pUpDown;

	int m_SendMode;
	BOOL m_RecvWait;
	BOOL m_CrLfWait;
	BOOL m_XonXoff;
	BOOL m_RecvEcho;

	int m_BlockSize;
	int m_BlockMsec;
	double m_CharUsec;
	int m_LineMsec;
	int m_RecvMsec;
	int m_CrLfMsec;

	CFileUpSendPage();
	virtual ~CFileUpSendPage();

	enum { IDD = IDD_FILEUPSENDDLG };

public:
	virtual BOOL OnApply();

protected:
	virtual BOOL OnInitDialog();
	virtual void DoDataExchange(CDataExchange* pDX);

public:
	DECLARE_MESSAGE_MAP()
};

//////////////////////////////////////////////////////////////////////
// CExtFileDialog

class CExtFileDialog : public CFileDialog
{
	DECLARE_DYNAMIC(CExtFileDialog)

public:
	CExtFileDialog(BOOL bOpenFileDialog, // FileOpen �� TRUE ���AFileSaveAs �� FALSE ���w�肵�܂��B
		LPCTSTR lpszDefExt = NULL,
		LPCTSTR lpszFileName = NULL,
		DWORD dwFlags = OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT,
		LPCTSTR lpszFilter = NULL,
		CWnd* pParentWnd = NULL,
		DWORD dwSize = 0,
		BOOL bVistaStyle = TRUE,
		int nDialogMode = 0,
		class CSyncSock *pOwner = NULL);
	virtual ~CExtFileDialog();

	enum { IDD = IDD_EXTFILEDLG };

public:
	int m_DialogMode;
	class CSyncSock *m_pOwner;

	CTabCtrl m_TabCtrl;
	CStatic m_Frame;

	CFileUpConvPage *m_pUpConv;
	CFileUpSendPage *m_pUpSend;
	CFileDownPage   *m_pDownPage;

public:
	virtual BOOL OnInitDialog();
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �T�|�[�g

public:
	DECLARE_MESSAGE_MAP()
	afx_msg void OnDestroy();
	afx_msg void OnTcnSelchangeTab1(NMHDR *pNMHDR, LRESULT *pResult);
};


