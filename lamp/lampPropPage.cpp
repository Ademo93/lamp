// lampPropPage.cpp : Implémentation de la classe de la page de propriétés ClampPropPage.

#include "pch.h"
#include "framework.h"
#include "lamp.h"
#include "lampPropPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(ClampPropPage, COlePropertyPage)

// Table des messages

BEGIN_MESSAGE_MAP(ClampPropPage, COlePropertyPage)
END_MESSAGE_MAP()

// Initialisation de la fabrique de classes et du guid

IMPLEMENT_OLECREATE_EX(ClampPropPage, "MFCACTIVEXCONT.lampPropPage.1",
	0x19ccad43,0xbd42,0x4320,0xa9,0x1c,0xdf,0x2a,0xf9,0x62,0x05,0xc5)

// ClampPropPage::ClampPropPageFactory::UpdateRegistry -
// Ajoute ou supprime des entrées du Registre système pour ClampPropPage

BOOL ClampPropPage::ClampPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_LAMP_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, nullptr);
}

// ClampPropPage::ClampPropPage - Constructeur

ClampPropPage::ClampPropPage() :
	COlePropertyPage(IDD, IDS_LAMP_PPG_CAPTION)
{
}

// ClampPropPage::DoDataExchange - Transfère les données entre la page et les propriétés

void ClampPropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}

// Gestionnaires de messages de ClampPropPage
