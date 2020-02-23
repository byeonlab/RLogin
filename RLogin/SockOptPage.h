#pragma once

// CSockOptPage �_�C�A���O

class CSockOptPage : public CTreePage
{
	DECLARE_DYNAMIC(CSockOptPage)

public:
	CSockOptPage();
	virtual ~CSockOptPage();

// �_�C�A���O �f�[�^
	enum { IDD = IDD_SOCKOPTPAGE };

public:
	double m_DelayUsecChar;
	UINT m_DelayMsecLine;
	UINT m_DelayMsecRecv;
	UINT m_DelayMsecCrLf;
	BOOL m_Check[20];
	int m_SelIPver;
	UINT m_SleepTime;
	CString m_GroupCast;
	UINT m_TransmitLimit;

public:
	void DoInit();

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �T�|�[�g
	virtual BOOL OnInitDialog();

public:
	virtual BOOL OnApply();
	virtual void OnReset();

protected:
	afx_msg void OnUpdateCheck(UINT nId);
	afx_msg void OnUpdateEdit();
	DECLARE_MESSAGE_MAP()
};
