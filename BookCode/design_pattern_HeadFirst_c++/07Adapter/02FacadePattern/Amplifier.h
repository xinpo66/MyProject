#ifndef AMPLIFIER_H_
#define AMPLIFIER_H_

#include <stdio.h>
#include <sp.hpp>

#include "DvdPlayer.h"

class Amplifier
{
public:
	Amplifier(){}
	~Amplifier(){}

	void On()
	{
		printf("Amplifier on\n");
	}

	void Off()
	{
		printf("Amplifier off\n");
	}

	void SetDVD(SP<DVDPlayer> _DVD)
	{
		printf("Amplifier SetDVD \n");
		_DVDPlayer = _DVD;
	}

	void SetSurroundSound()
	{
		printf("Amplifier SetSurroundSound\n");
	}

	void SetVolume(int Volume)
	{
		printf("Amplifier SetVolume:%d\n",Volume);
	}

private:
	SP<DVDPlayer> _DVDPlayer;
};

#endif //AMPLIFIER_H_
