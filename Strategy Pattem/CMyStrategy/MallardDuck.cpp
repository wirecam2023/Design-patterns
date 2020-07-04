#include "stdafx.h"
#include "MallardDuck.h"
#include "Quack.h"
#include <afxwin.h>
#include "FlyWithWings.h"


CMallardDuck::CMallardDuck(void)
{
	m_pQuackBehavior = new CQuack;
	m_pFlyBehavior = new CFlyWithWings;
}


CMallardDuck::~CMallardDuck(void)
{
}

void CMallardDuck::Display()
{
	AfxMessageBox(_T("我是一直绿头鸭!"), MB_OK);

}

//void CMallardDuck::PerformQuack()
//{
//	AfxMessageBox(_T("绿头鸭呱呱叫!"), MB_OK);
//
//}
//
//void CMallardDuck::PerformFly()
//{
//	AfxMessageBox(_T("绿头鸭正在飞!"), MB_OK);
//}
