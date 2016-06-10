#ifndef WILD_TURKEY_H_
#define WILD_TURKEY_H_

//////////////////////////////////////////////////////////////////////////
//
// 2016/4/16 9:46 Simple Xu
// Ò°»ð¼¦
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include "Turkey.h"

class WildTurkey : public Turkey
{
public:
	WildTurkey(){}
	virtual ~WildTurkey(){}

	virtual void gobble()
	{
		printf("Gobble gobble\n");
	}
	virtual void fly()
	{
		printf("I'm flying a short distance\n");
	}
};

#endif//WILD_TURKEY_H_