#pragma once
#include "FlyBehavior.h"
#include "QuackBehavior.h"

class CDuck
{
public:
	CDuck(void);
	virtual ~CDuck(void);
public:
	void SetFlyBehavior(CFlyBehavior* pFb);
	void SetQuackBehavior(CQuackBehavior* pQb);
public:
	virtual void PerformQuack();
	virtual void PerformFly();
public:
	void Swim();
	virtual void Display() = 0;
protected:
	CFlyBehavior* m_pFlyBehavior;
	CQuackBehavior* m_pQuackBehavior;
};

