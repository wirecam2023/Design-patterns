#include "stdafx.h"
#include "ChicagoStylePizzaStore.h"
#include "ChicagoStyleCheesePizza.h"
#include "ChicagoStylePepperoniPizza.h"
#include "ChicagoStyleClamPizza.h"
#include "ChicagoStyleVeggiePizza.h"


CChicagoStylePizzaStore::CChicagoStylePizzaStore(void)
{
}


CChicagoStylePizzaStore::~CChicagoStylePizzaStore(void)
{
}


CPizza* CChicagoStylePizzaStore::CreatePizza(const CString& strType)
{
	if (strType.Compare(_T("cheese")) == 0)
	{
		return new CChicagoStyleCheesePizza();
	}
	else if (strType.Compare(_T("pepperoni")) == 0)
	{
		return new CChicagoStylePepperoniPizza();
	}
	else if (strType.Compare(_T("clam")) == 0)
	{
		return new CChicagoStyleClamPizza();
	}
	else if (strType.Compare(_T("veggie")) == 0)
	{
		return new CChicagoStyleVeggiePizza();
	}
	else
	{
		ASSERT(0);
		return nullptr;
	}
}
