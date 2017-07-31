#if !defined(AFX_SERVERSELECT_H__32287928_9F2F_4995_84D5_57FD92A5240D__INCLUDED_)
#define AFX_SERVERSELECT_H__32287928_9F2F_4995_84D5_57FD92A5240D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ServerSelect.h : ヘッダー ファイル
//

#include "ListCtrlExt.h"
#include "Data.h"
#include "afxcmn.h"

/////////////////////////////////////////////////////////////////////////////
// CServerSelect ダイアログ

class CServerSelect : public CDialog
{
// コンストラクション
public:
	int m_EntryNum;
	int m_MinWidth;
	int m_MinHeight;
	CString m_Group;
	CStringIndex m_TabEntry;
	class CServerEntryTab *m_pData;

	void InitList();
	void InitItemOffset();
	void SetItemOffset(int cx, int cy);
	CServerSelect(CWnd* pParent = NULL);   // 標準のコンストラクタ

// ダイアログ データ
	//{{AFX_DATA(CServerSelect)
	enum { IDD = IDD_SERVERLIST };
	CListCtrlExt m_List;
	CTabCtrl m_Tab;
	//}}AFX_DATA


// オーバーライド
	// ClassWizard は仮想関数のオーバーライドを生成します。
	//{{AFX_VIRTUAL(CServerSelect)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV サポート
	//}}AFX_VIRTUAL

// インプリメンテーション
protected:

	// 生成されたメッセージ マップ関数
	//{{AFX_MSG(CServerSelect)
	virtual BOOL OnInitDialog();
	afx_msg void OnNewentry();
	afx_msg void OnEditentry();
	afx_msg void OnDelentry();
	afx_msg void OnDblclkServerlist(NMHDR* pNMHDR, LRESULT* pResult);
	virtual void OnOK();
	//}}AFX_MSG
	afx_msg void OnEditCopy();
	afx_msg void OnEditCheck();
	afx_msg void OnServInport();
	afx_msg void OnServExport();
	afx_msg void OnUpdateEditEntry(CCmdUI* pCmdUI);
	DECLARE_MESSAGE_MAP()

public:
	afx_msg void OnClose();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnSizing(UINT fwSide, LPRECT pRect);
	afx_msg void OnTcnSelchangeServertab(NMHDR *pNMHDR, LRESULT *pResult);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ は前行の直前に追加の宣言を挿入します。

#endif // !defined(AFX_SERVERSELECT_H__32287928_9F2F_4995_84D5_57FD92A5240D__INCLUDED_)
