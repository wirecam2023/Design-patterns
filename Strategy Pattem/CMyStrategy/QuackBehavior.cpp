#include "stdafx.h"
#include "QuackBehavior.h"
#include <iostream>
#include <afxwin.h>

CQuackBehavior::CQuackBehavior(void)
{
}


CQuackBehavior::~CQuackBehavior(void)
{
}

void CQuackBehavior::quack()
{
	AfxMessageBox(_T("Quack"), MB_OK);
}
