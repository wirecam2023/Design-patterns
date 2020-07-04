#pragma once
#include "Observer.h"
#include "DisplayElement.h"
#include "Subject.h"
//此布告板跟踪最小、平均、最大观测值，并显示
class CStatisticsDisplay : public CObserver, public CDisplayElement
{
public:
	CStatisticsDisplay(CSubject* pWeatherData);
	~CStatisticsDisplay(void);
public:
	virtual void Update(double dTemperature,double dTumidity,double dPressure);
	virtual void Display();
private:
	CSubject* m_pWeatherData;

	double m_dTemperature;
	double m_dHumidity;
	double m_dPressure;
};

