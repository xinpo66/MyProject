#ifndef GARAGEDOOR_H_
#define GARAGEDOOR_H_

//////////////////////////////////////////////////////////////////////////
//
// 2016/4/5 22:43 ���⿪�ų�����
// Simple Xu
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>

class GarageDoor
{
public:
	GarageDoor(){}
	virtual ~GarageDoor(){}

	void On()
	{
		printf("GarageDoor On\n");
	}

	void Off()
	{
		printf("GarageDoor Off\n");
	}
};

#endif //GARAGEDOOR_H_