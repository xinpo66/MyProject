#ifndef STEREO_H_
#define STEREO_H_

//////////////////////////////////////////////////////////////////////////
//
// 2016/4/8 22:04 Simple Xu
// ¡¢ÃÂ“ÙœÏ¿‡
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>

class Stereo
{
public:
	Stereo(){}
	virtual ~Stereo(){}

	void On()
	{
		printf("Stereo On\n");
	}

	void SetCD()
	{
		printf("Stereo SetCD\n");
	}

	void SetVolume( int volume )
	{
		printf("Stereo volume is:%d\n",volume);
	}

	void Off()
	{
		printf("Stereo Off\n");
	}
};

#endif//STEREO_H_