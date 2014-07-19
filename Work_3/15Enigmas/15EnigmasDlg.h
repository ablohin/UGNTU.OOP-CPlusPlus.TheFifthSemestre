// 15EnigmasDlg.h : header file
//

#if !defined(AFX_15ENIGMASDLG_H__1C37DA35_57D1_4022_A24E_4BC073B58505__INCLUDED_)
#define AFX_15ENIGMASDLG_H__1C37DA35_57D1_4022_A24E_4BC073B58505__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CMy15EnigmasDlg dialog

class CMy15EnigmasDlg : public CDialog
{
// Construction
public:
	CMy15EnigmasDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CMy15EnigmasDlg)
	enum { IDD = IDD_MY15ENIGMAS_DIALOG };
	CEdit	m_Enigmas;
	CEdit	m_Otvet;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy15EnigmasDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	UINT Count;
	BOOL Flag;
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CMy15EnigmasDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnEnigmas();
	afx_msg void OnOtvet();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_15ENIGMASDLG_H__1C37DA35_57D1_4022_A24E_4BC073B58505__INCLUDED_)
