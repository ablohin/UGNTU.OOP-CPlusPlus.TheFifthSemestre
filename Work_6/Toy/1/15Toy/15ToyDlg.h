// 15ToyDlg.h : header file
//

#if !defined(AFX_15TOYDLG_H__225ABD49_8EBA_4C4B_B01E_2EEBDDFE9F56__INCLUDED_)
#define AFX_15TOYDLG_H__225ABD49_8EBA_4C4B_B01E_2EEBDDFE9F56__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CMy15ToyDlg dialog

class CMy15ToyDlg : public CDialog
{
// Construction
public:
	CMy15ToyDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CMy15ToyDlg)
	enum { IDD = IDD_MY15TOY_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy15ToyDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CMy15ToyDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnDestroy();
	afx_msg void OnTimer(UINT nIDEvent);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_15TOYDLG_H__225ABD49_8EBA_4C4B_B01E_2EEBDDFE9F56__INCLUDED_)
