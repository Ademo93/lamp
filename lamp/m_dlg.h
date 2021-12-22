#pragma once
#include "afxdialogex.h"


// boîte de dialogue de m_dlg

class m_dlg : public CDialog
{
	DECLARE_DYNAMIC(m_dlg)

public:
	m_dlg(CWnd* pParent = nullptr);   // constructeur standard
	virtual ~m_dlg();

// Données de boîte de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV

	DECLARE_MESSAGE_MAP()
public:
	CTabCtrl m_tab;
};
