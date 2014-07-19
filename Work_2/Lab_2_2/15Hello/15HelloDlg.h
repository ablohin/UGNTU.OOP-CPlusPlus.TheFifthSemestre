// 15HelloDlg.h : header file
//

#if !defined(AFX_15HELLODLG_H__CBFCF64D_82B9_45DF_AAEE_A6F926DA06C5__INCLUDED_)
#define AFX_15HELLODLG_H__CBFCF64D_82B9_45DF_AAEE_A6F926DA06C5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CMy15HelloDlg dialog

class CMy15HelloDlg : public CDialog
{
// Construction
public:
	CMy15HelloDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CMy15HelloDlg)
	enum { IDD = IDD_MY15HELLO_DIALOG };
	CString	m_You;
	CString	m_Comp;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy15HelloDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	BOOL Flag;
	UINT Count;
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CMy15HelloDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnYou();
	afx_msg void OnComp();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_15HELLODLG_H__CBFCF64D_82B9_45DF_AAEE_A6F926DA06C5__INCLUDED_)
