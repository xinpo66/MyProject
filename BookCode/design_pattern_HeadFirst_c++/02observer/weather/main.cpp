//2014-4-9 11:14
//观察者模式，客户端测试程序

#include <iostream>
using namespace std;

#include "weatherdata.h"
#include "currentconditions.hpp"

int main(int argc,char* argv[])
{
	WeatherData* pSubject = new WeatherData;
	CurrentConditionsDisplay* pCurrentCon = new CurrentConditionsDisplay(pSubject);

	pSubject->SetMeasurements(14,15,14);

	//pSubject->removeObserver(pCurrentCon);

	//CurrentConditionsDisplay* pCurrentCon2 = new CurrentConditionsDisplay(pSubject);


	//pSubject->SetMeasurements(140,150,140);

	CurrentConditionsDisplay* pCurrentCon3 = new CurrentConditionsDisplay();

	pSubject->registerObserver(pCurrentCon3);
	
	pSubject->SetMeasurements(1400,1500,1400);

	return 0;
}