#pragma once
#include "beverage.h"

//装饰者类
//调料抽象类
class CCondimentDecorator : public CBeverage
{
public:
	CCondimentDecorator(void);
	virtual ~CCondimentDecorator(void);
public:
	virtual CString GetDescription() = 0;
};

