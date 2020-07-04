#pragma once
#include "beverage.h"

//…Ó±∫øß∑»
class CDarkRoast :
	public CBeverage
{
public:
	CDarkRoast(void);
	virtual ~CDarkRoast(void);
public:
	virtual double cost();
};

