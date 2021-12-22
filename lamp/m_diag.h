#pragma once
#include "afxdialogex.h"


// boîte de dialogue de m_diag

class m_diag : public CDialog
{
	DECLARE_DYNAMIC(m_diag)

public:
	m_diag(CWnd* pParent = nullptr);   // constructeur standard
	virtual ~m_diag();

// Données de boîte de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTcnSelchangeTab1(NMHDR* pNMHDR, LRESULT* pResult);
};
