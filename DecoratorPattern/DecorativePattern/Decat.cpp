#include "stdafx.h"
#include "Decat.h"


CDecat::CDecat(void)
{
	m_strDescription = _T("DecatµÕøß∑»“Ú“˚¡œ");
}


CDecat::~CDecat(void)
{
}

double CDecat::cost()
{
	return 1.05;
}
