#pragma once
#include "pizza.h"
class CChicagoStyleCheesePizza :
	public CPizza
{
public:
	CChicagoStyleCheesePizza(void);
	~CChicagoStyleCheesePizza(void);
public:
	virtual void Cut();

};

