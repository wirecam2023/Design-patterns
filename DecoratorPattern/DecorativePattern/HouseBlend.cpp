#include "stdafx.h"
#include "HouseBlend.h"


CHouseBlend::CHouseBlend(void)
{
	m_strDescription = _T("HouseBlend综合咖啡饮料");
}


CHouseBlend::~CHouseBlend(void)
{
}

double CHouseBlend::cost()
{
	return 0.89;  //综合 咖啡饮料价格 
}
