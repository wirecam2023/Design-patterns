#pragma once
#include "quackbehavior.h"
class CSqueak :
	public CQuackBehavior
{
public:
	CSqueak(void);
	virtual ~CSqueak(void);
public:
	virtual void Quack();
};

