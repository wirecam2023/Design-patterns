#pragma once
#include "PizzaStore.h"
class CChicagoStylePizzaStore : public CPizzaStore
{
public:
	CChicagoStylePizzaStore(void);
	~CChicagoStylePizzaStore(void);
public:
	CPizza* CreatePizza(const CString& strType);
};

