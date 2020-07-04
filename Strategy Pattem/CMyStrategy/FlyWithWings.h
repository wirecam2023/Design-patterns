#pragma once
#include "flybehavior.h"
class CFlyWithWings :
	public CFlyBehavior
{
public:
	CFlyWithWings(void);
	virtual ~CFlyWithWings(void);
public:
	virtual void Fly();
};

