#if !defined(AFX_TABSHEET_H__42EE262D_D15F_46D5_8F26_28FD049E99F4__INCLUDED_)
#define AFX_TABSHEET_H__42EE262D_D15F_46D5_8F26_28FD049E99F4__INCLUDED_

#if _MSC_VER>1000
#pragma once
#endif

#define MAXPAGE 16

class CTabSheet :public CTabCtrl {
public:
	CTabSheet();

//Attibutes:
public:


//Operations:
public:

//Overrides:


//Implementation
public:
	int GetCurSel();
	int SetCurSel(int nItem);
	void show();
	void SetRect();
	BOOL AddPage(LPCTSTR title, CDialog *pDialog, UINT ID);
	virtual ~CTabSheet();


protected:
	LPCTSTR m_Title[MAXPAGE];
	UINT m_IDD[MAXPAGE];
	CDialog *m_pPages[MAXPAGE];
	int m_nNumOfPages;
	int m_nCurrentPage;

	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);

	DECLARE_MESSAGE_MAP();
};

#endif