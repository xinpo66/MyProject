//²¼¸æ°å1

#pragma once

#include <iostream>
using namespace std;
#include "subject.hpp"

class CurrentConditionsDisplay : public Observer,DisplayElement
{
private:
	int m_temperature;
	int m_humidity;
	//int m_pressure;

	Subject* m_weatherData;
public:
	CurrentConditionsDisplay()
	{

	}
	CurrentConditionsDisplay(Subject* pWeatherData) 
	{
		m_weatherData = pWeatherData;
		m_weatherData->registerObserver(this);
	}
	virtual ~CurrentConditionsDisplay() { }

	void update(int temperature,int humidity, int pressure)
	{
		m_temperature = temperature;
		m_humidity = humidity;
		display();
	}

	void display()
	{
		cout<<"temperature is:"<<m_temperature
			<<"humidity is:"<<m_humidity<<endl;
	}
};