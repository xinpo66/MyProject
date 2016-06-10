#ifndef MALLARDDUCK_H_
#define MALLARDDUCK_H_

//////////////////////////////////////////////////////////////////////////
//
// 2016/4/21 22:06 Simple Xu
// 具体鸭子类
//////////////////////////////////////////////////////////////////////////

#include "Duck.h"

class MallardDuck : Duck
{
public:
	MallardDuck()
	{
		_FlyBehavior = SP<FlyBehavior>(new FlyWithWings());
		_QuackBehavior = SP<QuackBehavior>(new CQuack());
	}
	~MallardDuck(){}

	void Display()
	{
		printf("I'm a real MallardDuck\n");
	}
};

#endif//MALLARDDUCK_H_