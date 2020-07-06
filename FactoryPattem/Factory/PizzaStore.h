#pragma once
class CPizza;

class CPizzaStore
{
public:
	CPizzaStore();
	virtual ~CPizzaStore(void);
public:
	CPizza* OrderPizza(const CString& strType);
protected:
	virtual CPizza* CreatePizza(const CString& strType) = 0;  //工厂方法是抽象的

};

