#pragma once

// lampPropPage.h : Déclaration de la classe de la page de propriété ClampPropPage.


// ClampPropPage : Consultez lampPropPage.cpp pour l'implémentation.

class ClampPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(ClampPropPage)
	DECLARE_OLECREATE_EX(ClampPropPage)

// Constructeur
public:
	ClampPropPage();

// Données de boîte de dialogue
	enum { IDD = IDD_PROPPAGE_LAMP };

// Implémentation
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV

// Tables des messages
protected:
	DECLARE_MESSAGE_MAP()
};

