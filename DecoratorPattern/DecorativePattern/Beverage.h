#pragma once

//饮料抽象类
class CBeverage
{
public:
	CBeverage(void);
	virtual ~CBeverage(void);
	void Init();
public:
	virtual double cost() = 0;
	virtual CString GetDescription() const;
protected:
	CString m_strDescription;
};

/*
--咖啡饮料价格--  
综合 0.89
深焙 0.99
低咖啡因 1.05
浓缩  1.00

--调料价格-- 
牛奶 0.10
摩卡 0.2
豆浆 0.15
奶泡 0.10

*/

