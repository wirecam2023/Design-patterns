#include "stdafx.h"
#include "CurrentConditionsDisplay.h"
#include "WeatherData.h"


CCurrentConditionsDisplay::CCurrentConditionsDisplay(CSubject* pWeatherData)
{
	m_pWeatherData = new CWeatherData; 
	*m_pWeatherData = *pWeatherData;
	ASSERT(m_pWeatherData);
	if (m_pWeatherData != nullptr)
	{
		m_pWeatherData->RegisterObserver(this);		
	}
}

CCurrentConditionsDisplay::~CCurrentConditionsDisplay(void)
{
	delete m_pWeatherData;
}

void CCurrentConditionsDisplay::Update(double dTemperature,double dTumidity,double dPressure)
{
	m_dTemperature = dTemperature;
	m_dHumidity = dTumidity;
	m_dPressure = dPressure;

	Display();
}

void CCurrentConditionsDisplay::Display()
{
	CString str;
	str.Format(_T("Current conditions: %.1f degrees , Humidity: %.1f, Pressure : %.1f"), m_dTemperature, m_dHumidity, m_dPressure);
	AfxMessageBox(str,MB_OK);
}
