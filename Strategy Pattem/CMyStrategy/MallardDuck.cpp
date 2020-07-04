#include "stdafx.h"
#include "MallardDuck.h"
#include "Quack.h"
#include <afxwin.h>
#include "FlyWithWings.h"


CMallardDuck::CMallardDuck(void)
{
	m_pQuackBehavior = new CQuack;    //呱呱叫
	m_pFlyBehavior = new CFlyWithWings;//会飞
}


CMallardDuck::~CMallardDuck(void)
{
}

void CMallardDuck::Display()
{
	AfxMessageBox(_T("我是一直绿头鸭!"), MB_OK);

}

