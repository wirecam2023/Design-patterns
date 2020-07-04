#pragma once
#include "beverage.h"

//×ÛºÏ ¿§·ÈÒûÁÏ
class CHouseBlend :
	public CBeverage
{
public:
	CHouseBlend(void);
	virtual ~CHouseBlend(void);
	virtual double cost();
};

