#pragma once
class CPizzaFactory;
class CPizza;

class CPizzaStore
{
public:
	CPizzaStore(CPizzaFactory* pFactory);
	~CPizzaStore(void);
public:
	CPizza* OrderPizza(const CString& strType);

private:
	CPizzaFactory* m_pFactory;
};

