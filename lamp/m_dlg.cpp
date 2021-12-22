// m_dlg.cpp : fichier d'implémentation
//

#include "pch.h"
#include "lamp.h"
#include "afxdialogex.h"
#include "m_dlg.h"


// boîte de dialogue de m_dlg

IMPLEMENT_DYNAMIC(m_dlg, CDialog)

m_dlg::m_dlg(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG1, pParent)
{

}

m_dlg::~m_dlg()
{
}

void m_dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_TAB1, m_tab);
}


BEGIN_MESSAGE_MAP(m_dlg, CDialog)
END_MESSAGE_MAP()


// gestionnaires de messages de m_dlg
