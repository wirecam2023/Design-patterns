#pragma once
#include "beverage.h"
class CDecat :
	public CBeverage
{
public:
	CDecat(void);
	virtual ~CDecat(void);
public:
	virtual double cost();
};

