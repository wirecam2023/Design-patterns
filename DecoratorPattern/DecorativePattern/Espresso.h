#pragma once
#include "beverage.h"

//Å¨Ëõ¿§·ÈÒûÁÏ
class CEspresso : public CBeverage
{
public:
	CEspresso(void);
	virtual ~CEspresso(void);
public:
	virtual double cost();
};

