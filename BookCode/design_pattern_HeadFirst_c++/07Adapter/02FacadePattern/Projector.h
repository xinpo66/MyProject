#ifndef PROJECTOR_H_
#define PROJECTOR_H_

#include <stdio.h>

class Projector
{
public:
	Projector(){}
	~Projector(){}

	void On()
	{
		printf("Projector On\n");
	}

	void Off()
	{
		printf("Projector Off\n");
	}

	void WideScreenMode()
	{
		printf("Projector WideScreenMode\n");
	}
};

#endif //PROJECTOR_H_