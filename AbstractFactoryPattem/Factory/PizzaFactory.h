class CPizza;
#pragma once
class CPizzaFactory
{
public:
	CPizzaFactory(void);
	~CPizzaFactory(void);
public:
	CPizza* CreatePizza(const CString& strType);
};

