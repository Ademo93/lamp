// lamp.cpp : implémentation de ClampApp et inscription de DLL.

#include "pch.h"
#include "framework.h"
#include "lamp.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


ClampApp theApp;

const GUID CDECL _tlid = {0x3b976918,0xbe24,0x484f,{0x92,0xbc,0x2a,0x24,0x94,0xf1,0x0f,0xbf}};
const WORD _wVerMajor = 1;
const WORD _wVerMinor = 0;



// ClampApp::InitInstance - Initialisation de la DLL

BOOL ClampApp::InitInstance()
{
	BOOL bInit = COleControlModule::InitInstance();

	if (bInit)
	{
		// TODO: ajoutez ici votre propre code d'initialisation de module.
	}

	return bInit;
}



// ClampApp::ExitInstance - Fin de la DLL

int ClampApp::ExitInstance()
{
	// TODO: ajoutez ici votre propre code d'arrêt de module.

	return COleControlModule::ExitInstance();
}



// DllRegisterServer - Ajoute des entrées à la base de registres

STDAPI DllRegisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleRegisterTypeLib(AfxGetInstanceHandle(), _tlid))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(TRUE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}



// DllUnregisterServer - Supprime des entrées de la base de registres

STDAPI DllUnregisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleUnregisterTypeLib(_tlid, _wVerMajor, _wVerMinor))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(FALSE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}
