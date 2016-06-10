#ifndef THEATERLIGHTS_H_
#define THEATERLIGHTS_H_

#include <stdio.h>

class TheaterLights 
{
public:
	TheaterLights(){}
	~TheaterLights(){}

	void Dim(int D)
	{
		printf("TheaterLights Dim:%d\n",D);
	}

	void On()
	{
		printf("TheaterLights On \n");
	}
};

#endif//THEATERLIGHTS_H_