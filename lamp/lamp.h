#pragma once

// lamp.h : fichier d'en-tête principal pour lamp.DLL

#if !defined( __AFXCTL_H__ )
#error "incluez 'afxctl.h' avant d'inclure ce fichier"
#endif

#include "resource.h"       // symboles principaux


// ClampApp : consultez lamp.cpp pour l'implémentation.

class ClampApp : public COleControlModule
{
public:
	BOOL InitInstance();
	int ExitInstance();
};

extern const GUID CDECL _tlid;
extern const WORD _wVerMajor;
extern const WORD _wVerMinor;

