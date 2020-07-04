#include "stdafx.h"
#include "Duck.h"
#include <iostream>
#include <afxwin.h>


CDuck::CDuck(void)
{
}


CDuck::~CDuck(void)
{
}

void CDuck::SetFlyBehavior(CFlyBehavior* pFb)
{
	m_pFlyBehavior = pFb;
}

void CDuck::SetQuackBehavior(CQuackBehavior* pQb)
{
	m_pQuackBehavior = pQb;
}

void CDuck::PerformQuack()
{
	m_pQuackBehavior->quack();
}

void CDuck::Swim()
{
	AfxMessageBox(_T("All ducks float, even decoys!"), MB_OK);
}

void CDuck::Display()
{

}

void CDuck::PerformFly()
{
	m_pFlyBehavior->Fly();
}
