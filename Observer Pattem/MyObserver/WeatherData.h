#pragma once
#include "afx.h"
#include <vector>
#include "Observer.h"
#include "Subject.h"

//主题是正在拥有数据的人
//在CWeatherData实现CSubject的接口
class CWeatherData : public CSubject
{
public:
	CWeatherData(void);
	virtual ~CWeatherData(void);
	void Init();
public:
	virtual void RegisterObserver(CObserver* pObserver);
	virtual void RemoveObserver(CObserver* pObserver);
	virtual void NotifyObservers();

	void MeasurementsChanged();
	void SetMeasurements(const double dTemperature,const double dHumitity,const double dPressure);

	double GetTemperature() const;
	double GetHumidity() const;
	double GetPressure() const;
private:
	std::vector<CObserver*> m_pArrObserver;  //无数个观察者(订阅者)
	double m_dTemperature;
	double m_dHumidity;
	double m_dPressure;

};

