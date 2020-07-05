class CPizza;
#pragma once
class CSimplePizzaFactory
{
public:
	CSimplePizzaFactory(void);
	~CSimplePizzaFactory(void);
public:
	CPizza* CreatePizza(const CString& strType);
};

