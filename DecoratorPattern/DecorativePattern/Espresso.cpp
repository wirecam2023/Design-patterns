#include "stdafx.h"
#include "Espresso.h"


CEspresso::CEspresso(void)
{
	m_strDescription = _T("Espreso");
}


CEspresso::~CEspresso(void)
{
}

double CEspresso::cost()
{
	return 1.99;  //浓缩咖啡条例调料的价格
}
