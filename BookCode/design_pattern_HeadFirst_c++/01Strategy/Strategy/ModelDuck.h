#ifndef MODELDUCK_H_
#define MODELDUCK_H_

//////////////////////////////////////////////////////////////////////////
//
// 2016/4/21 22:38 Simple Xu
// Ä£ÐÍÑ¼
//////////////////////////////////////////////////////////////////////////

#include "Duck.h"

class ModelDuck : public Duck
{
public:
	ModelDuck()
	{
		_FlyBehavior = SP<FlyBehavior>(new FlyNoWay());
		_QuackBehavior = SP<QuackBehavior>(new CQuack());
	}
	~ModelDuck(){}

	void Display()
	{
		printf("I'm a Model Duck\n");
	}
};

#endif//MODELDUCK_H_