#include "pch.h"

#include <Windows.h>
#include <Xinput.h>

namespace
{
  HMODULE xinput;
}


/*
BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
    write();
  if(fdwReason == DLL_PROCESS_ATTACH) {
    xinput = LoadLibrary(L"C:\\Windows\\System32\\xinput1_3-orig.dll");
    if(xinput == 0)
      xinput = LoadLibrary(L"C:\\Windows\\System32\\xinput1_3.dll");
  }





  return TRUE;
}*/
