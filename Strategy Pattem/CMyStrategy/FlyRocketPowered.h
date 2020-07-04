#pragma once
#include "flybehavior.h"
class CFlyRocketPowered :
	public CFlyBehavior
{
public:
	CFlyRocketPowered(void);
	virtual ~CFlyRocketPowered(void);
public:
	virtual void Fly();
};

