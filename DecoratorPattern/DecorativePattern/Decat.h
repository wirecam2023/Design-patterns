#pragma once
#include "beverage.h"

//µÍ¿§·ÈÒòÒûÁÏ
class CDecat :
	public CBeverage
{
public:
	CDecat(void);
	virtual ~CDecat(void);
public:
	virtual double cost();
};

