#ifndef GARAGEDOOROPEN_H_
#define GARAGEDOOROPEN_H_

//////////////////////////////////////////////////////////////////////////
//
// 2016/4/5 22:43 ���⿪�ų�����
// Simple Xu
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>

class GarageDoorOpen
{
public:
	GarageDoorOpen(){}
	virtual ~GarageDoorOpen(){}

	void On()
	{
		printf("GarageDoorOpen On\n");
	}
};

#endif //GARAGEDOOROPEN_H_