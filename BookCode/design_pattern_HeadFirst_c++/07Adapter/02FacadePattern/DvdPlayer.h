#ifndef DVDPLAYER_H_
#define DVDPLAYER_H_

#include <stdio.h>
#include <string>

class DVDPlayer
{
public:
	DVDPlayer(){}
	~DVDPlayer(){}

	void On()
	{
		printf("DVDPlayer On\n");
	}

	void Play(std::string movie)
	{
		printf("DVDPlayer movie:%s\n",movie.c_str());
	}

	void Stop()
	{
		printf("DVDPlayer Stop\n");
	}

	void eject()
	{
		printf("DVDPlayer eject\n");
	}

	void Off()
	{
		printf("DVDPlayer Off\n");
	}
};

#endif//DVDPLAYER_H_