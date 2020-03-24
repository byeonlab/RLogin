#pragma once

// CScrnPage �_�C�A���O

class CScrnPage : public CTreePage
{
	DECLARE_DYNAMIC(CScrnPage)

// �R���X�g���N�^
public:
	CScrnPage();
	virtual ~CScrnPage();

// �_�C�A���O �f�[�^
	enum { IDD = IDD_SCRNPAGE };

public:
	int m_ScrnFont;
	CString	m_FontSize;
	CString	m_ColsMax[2];
	int m_VisualBell;
	int m_TypeCaret;
	BOOL m_Check[10];
	int m_FontHw;
	int m_TtlMode;
	BOOL m_TtlRep;
	BOOL m_TtlCng;
	CString m_ScrnOffsLeft;
	CString m_ScrnOffsRight;
	CStatic m_ColBox;
	COLORREF m_CaretColor;
	CString m_TitleName;
	int m_SleepMode;

public:
	void InitDlgItem();
	void InitFontSize();
	void DoInit();

// �I�[�o�[���C�h
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �T�|�[�g
	virtual BOOL OnInitDialog();

public:
	virtual BOOL OnApply();
	virtual void OnReset();

// �C���v�������e�[�V����
protected:
	DECLARE_MESSAGE_MAP()
	afx_msg void OnUpdateCheck(UINT nId);
	afx_msg void OnUpdateEdit();
	afx_msg void OnUpdateEditOpt();
	afx_msg void OnUpdateEditCaret();
	afx_msg void OnDrawItem(int nIDCtl, LPDRAWITEMSTRUCT lpDrawItemStruct);
	afx_msg void OnStnClickedCaretCol();
};
