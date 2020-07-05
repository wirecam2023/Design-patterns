#include "stdafx.h"
#include "PizzaStore.h"
#include "Pizza.h"
#include "PizzaFactory.h"

CPizzaStore::CPizzaStore(CPizzaFactory* pFactory)
{
	m_pFactory = pFactory;
}


CPizzaStore::~CPizzaStore(void)
{
}


CPizza* CPizzaStore::OrderPizza(const CString& strType)
{
	CPizza* pPizza = nullptr;
	pPizza = m_pFactory->CreatePizza(strType);

	pPizza->Prepare();
	pPizza->Bake();
	pPizza->Cut();
	pPizza->Box();

	return pPizza;
}

