#include "stdafx.h"
#include "NYStyleCheesePizza.h"


CNYStyleCheesePizza::CNYStyleCheesePizza(void)
{
	m_strName = _T("NY Style Sauce and Cheese Pizza");
	m_strDough = _T("Thin Crust Dough");
	m_strSauce = _T("Marinara Sauce");

	m_vctToppings.push_back(_T("Grated Reggiano Cheese"));
}


CNYStyleCheesePizza::~CNYStyleCheesePizza(void)
{
}
