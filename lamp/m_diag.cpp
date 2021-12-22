// m_diag.cpp : fichier d'implémentation
//

#include "pch.h"
#include "lamp.h"
#include "afxdialogex.h"
#include "m_diag.h"
#include "wintoastlib.h"

// boîte de dialogue de m_diag

IMPLEMENT_DYNAMIC(m_diag, CDialog)

m_diag::m_diag(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG1, pParent)
{

}

m_diag::~m_diag()
{
}

void m_diag::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(m_diag, CDialog)
	ON_NOTIFY(TCN_SELCHANGE, IDC_TAB1, &m_diag::OnTcnSelchangeTab1)
END_MESSAGE_MAP()


// gestionnaires de messages de m_diag


void m_diag::OnTcnSelchangeTab1(NMHDR* pNMHDR, LRESULT* pResult)
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	*pResult = 0;
}
