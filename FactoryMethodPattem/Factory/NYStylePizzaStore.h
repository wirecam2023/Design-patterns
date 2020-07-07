#pragma once
#include "pizzastore.h"
class CNYStylePizzaStore :
	public CPizzaStore
{
public:
	CNYStylePizzaStore(void);
	~CNYStylePizzaStore(void);
	CPizza* CreatePizza(const CString& strType);
};

