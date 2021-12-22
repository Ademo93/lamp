#pragma once

// lampCtrl.h : Déclaration de la classe du contrôle ActiveX ClampCtrl.
#include "m_dlg.h"

// ClampCtrl : Consultez lampCtrl.cpp pour l'implémentation.

class ClampCtrl : public COleControl
{
	DECLARE_DYNCREATE(ClampCtrl)

// Constructeur
public:
	ClampCtrl();

// Substitutions
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// Implémentation
protected:
	~ClampCtrl();

	DECLARE_OLECREATE_EX(ClampCtrl)    // Fabrique de classes et guid
	DECLARE_OLETYPELIB(ClampCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(ClampCtrl)     // ID de page de propriétés
	DECLARE_OLECTLTYPE(ClampCtrl)		// Nom de type et état divers

// Tables des messages
	DECLARE_MESSAGE_MAP()

// Tables de dispatch
	DECLARE_DISPATCH_MAP()

	afx_msg void AboutBox();

	void TabDefault(int nbtabs);

// Tables d'événements
	DECLARE_EVENT_MAP()

// ID de dispatch et d'événement
public:
	enum {
	};
};

