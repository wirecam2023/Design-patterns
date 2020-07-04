#pragma once
#include "flybehavior.h"
class CFlyNoWay :
	public CFlyBehavior
{
public:
	CFlyNoWay(void);
	virtual ~CFlyNoWay(void);
public:
	virtual void Fly();
};

