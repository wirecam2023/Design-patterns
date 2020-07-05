#include "stdafx.h"
#include "SimplePizzaFactory.h"
#include "CheesePizza.h"
#include "PepperoniPizza.h"
#include "ClamPizza.h"
#include "VeggiePizza.h"


CSimplePizzaFactory::CSimplePizzaFactory(void)
{
}


CSimplePizzaFactory::~CSimplePizzaFactory(void)
{
}

CPizza* CSimplePizzaFactory::CreatePizza(const CString& strType)
{
	CPizza* pPizza = nullptr;

	if (strType.Compare(_T("cheese")) == 0)
	{
		pPizza = new CCheesePizza();
	}
	else if (strType.Compare(_T("pepperoni")) == 0)
	{
		pPizza = new CPepperoniPizza();
	}
	else if (strType.Compare(_T("clam")) == 0)
	{
		pPizza = new CClamPizza();
	}
	else if (strType.Compare(_T("veggie")) == 0)
	{
		pPizza = new CVeggiePizza();
	}
	else
	{
		ASSERT(0);
	}

	return pPizza;
}
