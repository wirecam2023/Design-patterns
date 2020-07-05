#include "stdafx.h"
#include "Whip.h"


CWhip::CWhip(CBeverage* pBeverage)
{
	m_pBeverage = pBeverage;
}


CWhip::~CWhip(void)
{
}

CString CWhip::GetDescription() const
{
	return m_pBeverage->GetDescription() + _T(", Mocha");
}

double CWhip::cost()
{
	return 0.1 + m_pBeverage->cost(); //0.1为奶泡调料的价格
}

