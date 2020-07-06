#include "stdafx.h"
#include "Pizza.h"

CPizza::CPizza()
{

}

CPizza::~CPizza(void)
{
}

CString CPizza::GetName() const
{
	return m_strName;
}

void CPizza::Prepare()
{
	CString str;
	str = _T("Preparing ") + m_strName +
		  _T("Tossing Dough...") +
		  _T("Adding sauce...") +
		  _T("Adding toppings:");
	for (size_t i = 0; i < m_vctToppings.size(); ++i)
	{
		str += m_vctToppings[i];
	}
	AfxMessageBox(str, MB_OK);
}

void CPizza::Bake()
{
	CString str = _T("Bake for 25 minutes at 350");
	AfxMessageBox(str, MB_OK);
}

void CPizza::Cut()
{
	CString str = _T("Cutting the pizza into diagonal slices");
	AfxMessageBox(str, MB_OK);
}

void CPizza::Box()
{
	CString str = _T("Place pizza in official PizzaStore box");
	AfxMessageBox(str, MB_OK);
}
