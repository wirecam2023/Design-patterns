#pragma once
#include "quackbehavior.h"
class CQuack : public CQuackBehavior
{
public:
	CQuack(void);
	virtual ~CQuack(void);
public:
	virtual void Quack();
};

