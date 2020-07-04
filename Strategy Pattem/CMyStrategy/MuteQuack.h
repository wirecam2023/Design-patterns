#pragma once
#include "quackbehavior.h"
class CMuteQuack :
	public CQuackBehavior
{
public:
	CMuteQuack(void);
	virtual ~CMuteQuack(void);
public:
	virtual void Quack();
};

