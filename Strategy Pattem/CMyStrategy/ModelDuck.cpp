#include "stdafx.h"
#include "ModelDuck.h"
#include "Quack.h"
#include "FlyNoWay.h"
#include "MuteQuack.h"


CModelDuck::CModelDuck(void)
{
	m_pFlyBehavior = new CFlyNoWay;  //不会飞
	m_pQuackBehavior = new CMuteQuack;  //不会叫
}


CModelDuck::~CModelDuck(void)
{
}

void CModelDuck::Display()
{
	AfxMessageBox(_T("我是一只模型鸭!"), MB_OK);
}
