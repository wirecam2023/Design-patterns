#include "stdafx.h"
#include "Soy.h"


CSoy::CSoy(CBeverage* pBeverage)
{
	m_pBeverage = pBeverage;
}


CSoy::~CSoy(void)
{
}

CString CSoy::GetDescription() const
{
	return m_pBeverage->GetDescription() + _T(", Mocha");
}

double CSoy::cost()
{
	return 0.15 + m_pBeverage->cost(); //0.15为豆浆调料的价格
}

