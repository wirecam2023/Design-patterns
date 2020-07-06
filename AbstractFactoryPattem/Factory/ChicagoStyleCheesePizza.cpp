#include "stdafx.h"
#include "ChicagoStyleCheesePizza.h"


CChicagoStyleCheesePizza::CChicagoStyleCheesePizza(void)
{
	m_strName = _T("Chicago Style Deep Dish Cheese Pizza");
	m_strDough = _T("Extra Thick Crust Dough");
	m_strSauce = _T("Plum Tomato Sauce");

	m_vctToppings.push_back(_T("Cutting the pizza into square slices"));
}


CChicagoStyleCheesePizza::~CChicagoStyleCheesePizza(void)
{
}

void CChicagoStyleCheesePizza::Cut()
{
	CString str = _T("Cutting the pizza into square slices");
	AfxMessageBox(str, MB_OK);
}
