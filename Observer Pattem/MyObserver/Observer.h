#pragma once

//CObserver:订阅者
//接口
class CObserver
{
public:
	CObserver(void);
	virtual ~CObserver(void);
public:
	virtual void Update(double dTemperature,double dTumidity,double dPressure) = 0; //只有一个Updete方法
};

