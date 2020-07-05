#pragma once
class CSimplePizzaFactory;
class CPizza;

class CPizzaStore
{
public:
	CPizzaStore(CSimplePizzaFactory* pFactory);
	~CPizzaStore(void);
public:
	CPizza* OrderPizza(const CString& strType);

private:
	CSimplePizzaFactory* m_pFactory;
};

