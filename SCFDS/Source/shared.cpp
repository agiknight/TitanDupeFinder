#include "stdafx.h"
#include "shared.h"

extern HWND hWnd;

void UpdateInstanceWindowTitle() 
{
	char sWindowTitle[1024]={0};
	wsprintf(sWindowTitle,"[Titan DupeFinder] %s",TITANDUPEFINDER_CURRENT_VERSION);
	SetWindowText(hWnd,sWindowTitle);  
}