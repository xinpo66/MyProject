#include "weatherdata.h"

void WeatherData::registerObserver(Observer* o)
{
	m_lstObserver.push_back(o);
}

void WeatherData::removeObserver(Observer* o)
{
	list<Observer*>::const_iterator iter = m_lstObserver.begin();
	for (; iter != m_lstObserver.end(); iter++)
	{
		Observer* pObserver = (Observer*)*iter;
		if ( pObserver == o)
		{
			m_lstObserver.erase(iter);
			return;
		}
	}
}

void WeatherData::notifyObservers()
{
	list<Observer*>::const_iterator iter = m_lstObserver.begin();
	for (; iter != m_lstObserver.end(); iter++)
	{
		Observer* pObserver = (Observer*)*iter;
		pObserver->update(m_temperature,m_humidity,m_pressure);
	}
}

void WeatherData::measurementsChanged()
{
	notifyObservers();
}

void WeatherData::SetMeasurements( int temperature, int humidity, int pressure )
{
	m_temperature = temperature;
	m_humidity = humidity;
	m_pressure = pressure;
	measurementsChanged();
}