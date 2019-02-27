#pragma once

#include "afxwin.h"
#include "DialogExt.h"

// CAnyPastDlg �_�C�A���O

class CAnyPastDlg : public CDialogExt
{
	DECLARE_DYNAMIC(CAnyPastDlg)

public:
	CAnyPastDlg(CWnd* pParent = NULL);   // �W���R���X�g���N�^�[
	virtual ~CAnyPastDlg();

// �_�C�A���O �f�[�^
	enum { IDD = IDD_ANYPASTDIG };

public:
	CStatic m_IconBox;
	CEdit m_EditWnd;
	int m_CtrlCode[3];
	BOOL m_bUpdateText;
	BOOL m_bDelayPast;
	BOOL m_NoCheck;

	CString m_EditText;
	BOOL m_bUpdateEnable;
	int m_MinWidth;
	int m_MinHeight;

public:
	void CtrlCount();
	void SaveWindowRect();

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �T�|�[�g
	virtual BOOL OnInitDialog();
	virtual void OnOK();
	virtual void OnCancel();

protected:
	DECLARE_MESSAGE_MAP()
	afx_msg void OnUpdateEdit();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnSizing(UINT fwSide, LPRECT pRect);
	afx_msg void OnCtrlConv(UINT nID);
	afx_msg void OnShellesc();
};
