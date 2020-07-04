#include "stdafx.h"
#include "Squeak.h"
#include <iostream>
#include <afxwin.h>

CSqueak::CSqueak(void)
{
}


CSqueak::~CSqueak(void)
{
}

void CSqueak::Quack()
{
	AfxMessageBox(_T("Ö¨Ö¨½Ð!"), MB_OK);
}
