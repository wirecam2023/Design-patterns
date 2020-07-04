#include "stdafx.h"
#include "WeatherStation.h"
#include "WeatherData.h"

#include <memory>
#include "CurrentConditionsDisplay.h"
#include "StaticDisplay.h"
#include "ForcastDisplay.h"
#include "Observer.h"

CWeatherStation::CWeatherStation(void)
{
}


CWeatherStation::~CWeatherStation(void)
{
}

void CWeatherStation::Main()
{
	CWeatherData* pWeatherData = new CWeatherData;

	//当前天气状况布告板
	CCurrentConditionsDisplay* pCurrentDisplay = new CCurrentConditionsDisplay(pWeatherData);

	//天气统计布告板
	CStatisticsDisplay* pStatisticsDisplay = new CStatisticsDisplay(pWeatherData);
	pWeatherData->RegisterObserver(pStatisticsDisplay);

	//天气预报布告板
	CForcastDisplay* pForcastDisplay = new CForcastDisplay(pWeatherData);
	pWeatherData->RegisterObserver(pForcastDisplay);

	pWeatherData->SetMeasurements(80.0, 65.0, 30.4);
	pWeatherData->SetMeasurements(82.0, 70.0, 29.2);
	pWeatherData->SetMeasurements(78.0, 90.0, 29.2);

	delete pWeatherData;
}
