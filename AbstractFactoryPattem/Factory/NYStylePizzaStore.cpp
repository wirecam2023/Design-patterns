#include "stdafx.h"
#include "NYStylePizzaStore.h"
#include "NYStyleCheesePizza.h"
#include "NYStylePepperoniPizza.h"
#include "NYStyleClamPizza.h"
#include "NYStyleVeggiePizza.h"


CNYStylePizzaStore::CNYStylePizzaStore(void)
{
}


CNYStylePizzaStore::~CNYStylePizzaStore(void)
{
}

CPizza* CNYStylePizzaStore::CreatePizza(const CString& strType)
{
	if (strType.Compare(_T("cheese")) == 0)
	{
		return new CNYStyleCheesePizza();
	}
	else if (strType.Compare(_T("pepperoni")) == 0)
	{
		return new CNYStylePepperoniPizza();
	}
	else if (strType.Compare(_T("clam")) == 0)
	{
		return new CNYStyleClamPizza();
	}
	else if (strType.Compare(_T("veggie")) == 0)
	{
		return new CNYStyleVeggiePizza();
	}
	else
	{
		ASSERT(0);
		return nullptr;
	}
}
