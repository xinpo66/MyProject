#ifndef CAFFEINE_BEVERAGE_H_
#define CAFFEINE_BEVERAGE_H_

//////////////////////////////////////////////////////////////////////////
//
// 2016/4/23 21:35 Simple Xu
// 咖啡因饮料，抽象类
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>

class CaffeineBeverage
{
public:
	CaffeineBeverage(){}
	virtual ~CaffeineBeverage(){}

	void PrepareRecipe()
	{
		BoilWater();
		Brew();
		PourInCup();
		AddCondiments();
	}

	virtual void Brew() = 0;

	virtual void AddCondiments() = 0;

	void BoilWater()
	{
		printf("Boiling water\n");
	}

	void PourInCup()
	{
		printf("Pouring into cup\n");
	}
};

#endif//CAFFEINE_BEVERAGE_H_