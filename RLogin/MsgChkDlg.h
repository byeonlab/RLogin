#pragma once

#include "afxwin.h"
#include "DialogExt.h"

// CMsgChkDlg �_�C�A���O

class CMsgChkDlg : public CDialogExt
{
	DECLARE_DYNAMIC(CMsgChkDlg)

public:
	CMsgChkDlg(CWnd* pParent = NULL);   // �W���R���X�g���N�^�[
	virtual ~CMsgChkDlg();

// �_�C�A���O �f�[�^
	enum { IDD = IDD_MSGDLG };

public:
	CStatic m_IconWnd;
	CStatic m_MsgWnd;
	BOOL m_bNoCheck;
	CString m_Title;
	CString m_MsgText;
	CFont m_MsgFont;
	CBrush m_BkBrush;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �T�|�[�g
	virtual BOOL OnInitDialog();
	virtual void OnCancel();

protected:
	DECLARE_MESSAGE_MAP()
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg LRESULT OnDpiChanged(WPARAM wParam, LPARAM lParam);
};
