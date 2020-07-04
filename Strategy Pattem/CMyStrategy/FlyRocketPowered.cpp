#include "stdafx.h"
#include "FlyRocketPowered.h"


CFlyRocketPowered::CFlyRocketPowered(void)
{
}


CFlyRocketPowered::~CFlyRocketPowered(void)
{
}

void CFlyRocketPowered::Fly()
{
	AfxMessageBox(_T("我可以像火箭一样飞!"),MB_OK);
}
