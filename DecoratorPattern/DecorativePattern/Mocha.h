#pragma once
#include "condimentdecorator.h"
class CBeverage;
class CMocha :
	public CCondimentDecorator
{
public:
	CMocha(CBeverage* pBeverage);
	virtual ~CMocha(void);
public:
	virtual CString GetDescription() const;
	virtual double cost();
private:
	CBeverage* m_pBeverage;
};

