// lampCtrl.cpp : Implémentation de la classe du contrôle ActiveX ClampCtrl.

#include "pch.h"
#include "framework.h"
#include "lamp.h"
#include "lampCtrl.h"
#include "lampPropPage.h"
#include "afxdialogex.h"
#include <string>
#include "m_dlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(ClampCtrl, COleControl)

// Table des messages

BEGIN_MESSAGE_MAP(ClampCtrl, COleControl)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
END_MESSAGE_MAP()

// Table de dispatch

BEGIN_DISPATCH_MAP(ClampCtrl, COleControl)
	DISP_FUNCTION_ID(ClampCtrl, "AboutBox", DISPID_ABOUTBOX, AboutBox, VT_EMPTY, VTS_NONE)
END_DISPATCH_MAP()

// Table d'événements

BEGIN_EVENT_MAP(ClampCtrl, COleControl)
END_EVENT_MAP()

// Pages de propriétés

// TODO: ajoutez des pages de propriétés selon les besoins. N'oubliez pas d'augmenter le compteur !
BEGIN_PROPPAGEIDS(ClampCtrl, 1)
	PROPPAGEID(ClampPropPage::guid)
END_PROPPAGEIDS(ClampCtrl)

// Initialisation de la fabrique de classes et du guid

IMPLEMENT_OLECREATE_EX(ClampCtrl, "MFCACTIVEXCONTRO.lampCtrl.1",
	0xba9c8b75,0xc449,0x45fe,0x92,0xe2,0x47,0xfc,0xa0,0x47,0xc0,0xa6)

// ID et version de bibliothèque de types

IMPLEMENT_OLETYPELIB(ClampCtrl, _tlid, _wVerMajor, _wVerMinor)

// ID d'interface

const IID IID_Dlamp = {0xa8cb5563,0xb2ab,0x4706,{0xb1,0x05,0xbc,0xd0,0x72,0xb6,0x46,0x6f}};
const IID IID_DlampEvents = {0xfb8db315,0x123e,0x4a99,{0xa6,0xbc,0xf7,0x35,0x75,0x84,0x86,0x28}};

// Informations de type du contrôle

static const DWORD _dwlampOleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(ClampCtrl, IDS_LAMP, _dwlampOleMisc)

// ClampCtrl::ClampCtrlFactory::UpdateRegistry -
// Ajoute ou supprime les entrées de la base de registres pour ClampCtrl

BOOL ClampCtrl::ClampCtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO: vérifiez que votre contrôle suit les règles du modèle de thread apartment.
	// Reportez-vous à MFC TechNote 64 pour plus d'informations.
	// Si votre contrôle ne se conforme pas aux règles du modèle apartment, vous
	// devez modifier le code ci-dessous, en modifiant le 6è paramètre de
	// afxRegApartmentThreading en 0.

	if (bRegister)
		return AfxOleRegisterControlClass(
			AfxGetInstanceHandle(),
			m_clsid,
			m_lpszProgID,
			IDS_LAMP,
			IDB_LAMP,
			afxRegApartmentThreading,
			_dwlampOleMisc,
			_tlid,
			_wVerMajor,
			_wVerMinor);
	else
		return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}


// ClampCtrl::ClampCtrl - Constructeur

ClampCtrl::ClampCtrl()
{
	InitializeIIDs(&IID_Dlamp, &IID_DlampEvents);
	// TODO: initialisez ici les données de l'instance de votre contrôle.
}

// ClampCtrl::~ClampCtrl - Destructeur

ClampCtrl::~ClampCtrl()
{
	// TODO: nettoyez ici les données de l'instance de votre contrôle.
}

// ClampCtrl::OnDraw - Fonction de dessin

void ClampCtrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& /* rcInvalid */)
{
	if (!pdc)
		return;

	// TODO: remplacez le code suivant par votre code de dessin
}

// ClampCtrl::DoPropExchange - Prise en charge de la persistance

void ClampCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: appelez les fonctions PX_ pour chaque propriété personnalisée persistante.
}


// ClampCtrl::OnResetState - Réinitialise le contrôle à son état par défaut

void ClampCtrl::OnResetState()
{
	COleControl::OnResetState();  // Réinitialise les valeurs par défaut trouvées dans DoPropExchange

	// TODO: réinitialisez ici les autres valeurs d'état du contrôle.
}


// ClampCtrl::AboutBox - Affiche une boîte de dialogue "À propos de" pour l'utilisateur

void ClampCtrl::AboutBox()
{
	CDialogEx dlgAbout(IDD_ABOUTBOX_LAMP);
	dlgAbout.DoModal();
}


// Gestionnaires de messages de ClampCtrl


void ClampCtrl::TabDefault(int nbtabs)
{

	CTabCtrl m_tab;
	for(int i=1;nbtabs>i;i++)
	{
		TCITEM tcItem;
		tcItem.mask = TCIF_TEXT;
		tcItem.pszText = _T("test");
		m_tab.InsertItem(nbtabs, &tcItem);
	}
}

