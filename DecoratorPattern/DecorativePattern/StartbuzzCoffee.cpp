#include "stdafx.h"
#include "StartbuzzCoffee.h"
#include "Beverage.h"
#include "Espresso.h"
#include "DarkRoast.h"
#include "Mocha.h"
#include "Whip.h"
#include "HouseBlend.h"
#include "Soy.h"


CStartbuzzCoffee::CStartbuzzCoffee(void)
{
}


CStartbuzzCoffee::~CStartbuzzCoffee(void)
{
}

void CStartbuzzCoffee::Main()
{
	//订一杯CEspresso（浓缩咖啡）饮料，不需要调料
	CBeverage* m_pBeverage = new CEspresso;  
	CString strCost;
	CString strResult;
	strCost.Format(_T("%.2f"), m_pBeverage->cost());
	strResult = m_pBeverage->GetDescription() + _T(" $") + strCost;  //打印出它的描述与价格
	AfxMessageBox(strResult, MB_OK);

	//订一杯 CDarkRoast深焙咖啡 饮料
	CBeverage* m_pBeverage2 = new CDarkRoast;  //深焙咖啡 饮料    0.99$
	m_pBeverage2 = new CMocha(m_pBeverage2);   //添加调料摩卡装饰 0.2$
	m_pBeverage2 = new CMocha(m_pBeverage2);   //添加调料摩卡装饰 0.2$
	m_pBeverage2 = new CWhip(m_pBeverage2);    //添加调料奶泡装饰 0.1$
	strCost.Format(_T("%.2f"), m_pBeverage2->cost());  //=1.49$
	strResult = m_pBeverage2->GetDescription() + _T(" $") + strCost;  //打印出它的描述与价格
	AfxMessageBox(strResult, MB_OK);

	//订一杯 CHouseBlend综合咖啡 饮料
	CBeverage* m_pBeverage3 = new CHouseBlend; //综合咖啡 饮料     0.89$                    
	m_pBeverage3 = new CSoy(m_pBeverage3);     //添加调料豆浆装饰  0.15$
	m_pBeverage3 = new CMocha(m_pBeverage3);   //添加调料摩卡装饰  0.2$
	m_pBeverage3 = new CWhip(m_pBeverage3);    //添加调料奶泡装饰  0.1$
	strCost.Format(_T("%.2f"), m_pBeverage3->cost());  //=1.34$
	strResult = m_pBeverage3->GetDescription() + _T(" $") + strCost;  //打印出它的描述与价格
	AfxMessageBox(strResult, MB_OK);

	delete m_pBeverage;
	delete m_pBeverage2;
	delete m_pBeverage3;

}

/*
--咖啡饮料价格--  
HouseBlend 综合 0.89
DarkRoast  深焙 0.99
Decat      低咖啡因 1.05
Espresso   浓缩  1.99

--调料价格-- 
Milk  牛奶 0.10
Mocha 摩卡 0.2
Soy   豆浆 0.15
Whip  奶泡 0.10

*/

