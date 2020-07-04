#pragma once
#include "Observer.h"
#include "DisplayElement.h"
#include "Subject.h"
//显示天气预报
class CForcastDisplay : public CObserver, public CDisplayElement
{
public:
	CForcastDisplay(CSubject* pWeatherData);
	~CForcastDisplay(void);
public:
	virtual void Update(double dTemperature,double dTumidity,double dPressure);
	virtual void Display();
private:
	CSubject* m_pWeatherData;

	double m_dTemperature;
	double m_dHumidity;
	double m_dPressure;
};

