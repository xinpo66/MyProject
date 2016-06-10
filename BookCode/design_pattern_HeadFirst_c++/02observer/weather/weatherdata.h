//2014-4-9 11:13
//Ö÷Ìâ

#pragma once

#include "subject.hpp"
#include <list>
using namespace std;

class WeatherData : public Subject
{
private:
	int m_temperature;
	int m_humidity;
	int m_pressure;
	list<Observer*>m_lstObserver;
public:
	WeatherData() { }
	virtual ~WeatherData() { }

	virtual void registerObserver(Observer* o);
	virtual void removeObserver(Observer* o);
	virtual void notifyObservers();

	int getTemperature(){ return m_temperature; }
	
	int getHumidity(){ return m_humidity; }

	int getPresssure() { return m_pressure; }

	void measurementsChanged();

	void SetMeasurements(int temperature, int humidity, int pressure);

};