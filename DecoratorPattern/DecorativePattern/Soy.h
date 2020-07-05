#pragma once
#include "condimentdecorator.h"
class CBeverage;

//¶¹½¬µ÷ÁÏ
class CSoy :
	public CCondimentDecorator
{
public:
	CSoy(CBeverage* pBeverage);
	virtual ~CSoy(void);
public:
	virtual CString GetDescription() const;
	virtual double cost();
private:
	CBeverage* m_pBeverage;
};

