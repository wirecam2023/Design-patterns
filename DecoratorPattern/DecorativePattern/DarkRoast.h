#pragma once
#include "beverage.h"
class CDarkRoast :
	public CBeverage
{
public:
	CDarkRoast(void);
	virtual ~CDarkRoast(void);
public:
	virtual double cost();
};

