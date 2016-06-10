#ifndef COFFEE_H_
#define COFFEE_H_

//////////////////////////////////////////////////////////////////////////
//
// 2016/4/32 21:46 Simple Xu
//
//////////////////////////////////////////////////////////////////////////

#include "CaffeineBeverage.h"

class Coffee : public CaffeineBeverage
{
public:
	Coffee(){}
	~Coffee(){}

	virtual void Brew()
	{
		printf("Dripping Coffee through filter\n");
	}

	virtual void AddCondiments()
	{
		printf("Adding Sugar and Milk\n");
	}
};

#endif //COFFEE_H_