#ifndef MALLARD_DUCK_H_
#define MALLARD_DUCK_H_

//////////////////////////////////////////////////////////////////////////
//
// 2016/4/16 9:34 Simple Xu
// ÂÌÍ·Ñ¼
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include "Duck.h"

class MallardDuck : public Duck
{
public:
	MallardDuck() {}
	virtual ~MallardDuck(){}
	
	virtual void quack()
	{
		printf("Quack \n");
	}
	virtual void fly()
	{
		printf("I'm flying\n");
	}
};

#endif