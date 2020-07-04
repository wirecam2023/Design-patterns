#include "stdafx.h"
#include "StaticDisplay.h"
#include "Subject.h"
#include "WeatherData.h"


CStatisticsDisplay::CStatisticsDisplay(CSubject* pWeatherData)
{
	m_pWeatherData = new CWeatherData; 
	*m_pWeatherData = *pWeatherData;
	if (m_pWeatherData != nullptr)
	{
		m_pWeatherData->RegisterObserver(this);		
	}
}


CStatisticsDisplay::~CStatisticsDisplay(void)
{
	delete m_pWeatherData;
}

void CStatisticsDisplay::Update(double dTemperature,double dTumidity,double dPressure)
{
	m_dTemperature = dTemperature;
	m_dHumidity = dTumidity;
	m_dPressure = dPressure;
	Display();
}

void CStatisticsDisplay::Display()
{
	CString str;
	str.Format(_T("Current conditions: %.1f degrees , Humidity: %.1f, Pressure : %.1f"), m_dTemperature, m_dHumidity, m_dPressure);
	AfxMessageBox(str,MB_OK);
}
