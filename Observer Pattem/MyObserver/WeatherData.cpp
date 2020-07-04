#include "stdafx.h"
#include "WeatherData.h"


CWeatherData::CWeatherData(void)
{
	Init();
}


CWeatherData::~CWeatherData(void)
{
	for (auto it = m_pArrObserver.begin(); it != m_pArrObserver.end(); it++)
	{
		if ((*it) != nullptr)
		{
			delete *it;
			(*it) = nullptr;
		}
	}
}


void CWeatherData::Init()
{
	m_dTemperature = 0.0;
	m_dHumidity = 0.0;
	m_dPressure = 0.0;
}

void CWeatherData::RegisterObserver(CObserver* pObserver)
{
	m_pArrObserver.push_back(pObserver);
}

void CWeatherData::RemoveObserver(CObserver* pObserver)
{
	for (auto it = m_pArrObserver.begin(); it != m_pArrObserver.end(); it++)
	{
		if (*it == pObserver)
		{
			m_pArrObserver.erase(it);
		}
	}

}

void CWeatherData::NotifyObservers()
{
	for (auto it = m_pArrObserver.begin(); it != m_pArrObserver.end(); it++)
	{
		(*it)->Update(m_dTemperature, m_dHumidity, m_dPressure);
	}
}

void CWeatherData::MeasurementsChanged()
{
	NotifyObservers();
}

void CWeatherData::SetMeasurements(const double dTemperature,const double dHumitity,const double dPressure)
{
	m_dTemperature = dTemperature;
	m_dHumidity = dHumitity;
	m_dPressure = dPressure;

	MeasurementsChanged();
}

double CWeatherData::GetTemperature() const
{
	return m_dTemperature;
}

double CWeatherData::GetHumidity() const
{
	return m_dHumidity;
}

double CWeatherData::GetPressure() const
{
	return m_dPressure;
}

