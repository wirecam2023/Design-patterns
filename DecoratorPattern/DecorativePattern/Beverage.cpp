#include "stdafx.h"
#include "Beverage.h"


CBeverage::CBeverage(void)
{
	Init();
}


CBeverage::~CBeverage(void)
{
}

void CBeverage::Init()
{
	m_strDescription = _T("Unknow Beverage");
}

CString CBeverage::GetDescription() const
{
	return m_strDescription;
}
