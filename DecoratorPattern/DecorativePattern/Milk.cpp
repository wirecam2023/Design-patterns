#include "stdafx.h"
#include "Milk.h"


CMilk::CMilk(CBeverage* pBeverage)
{
	m_pBeverage = pBeverage;
}


CMilk::~CMilk(void)
{
}

CString CMilk::GetDescription() const
{
	return m_pBeverage->GetDescription() + _T(", Mocha");
}

double CMilk::cost()
{
	return 0.1 + m_pBeverage->cost(); //0.1为牛奶调料的价格
}

