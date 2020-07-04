#include "stdafx.h"
#include "Espresso.h"


CEspresso::CEspresso(void)
{
	m_strDescription = _T("Espreso浓缩咖啡");
}


CEspresso::~CEspresso(void)
{
}

double CEspresso::cost()
{
	return 1.99;  //浓缩咖啡调料的价格
}
