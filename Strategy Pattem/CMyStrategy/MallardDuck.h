#pragma once
#include "duck.h"
class CMallardDuck : public CDuck
{
public:
	CMallardDuck(void);
	virtual ~CMallardDuck(void);
public:
	void Display();
	//virtual void PerformQuack();
	//virtual void PerformFly();
};

