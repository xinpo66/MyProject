#ifndef CHEESE_PIZZA_H_
#define CHEESE_PIZZA_H_

//////////////////////////////////////////////////////////////////////////
//
// 2016/3/15 21:47
// Simple Xu
// 芝士披萨
//////////////////////////////////////////////////////////////////////////

#include "Pizza.h"
#include "PizzaIngredientFactory.h"
#include <stdio.h>

//利用相关的工厂生产原料。所生产的原料依赖所使用的工厂，pizza根本不关心这些原料
//，它只知道如何制作披萨。
class CheesePizza : public Pizza
{
public:
	CheesePizza(PizzaIngredientFactory* Factory)
		:_Factory(Factory)
	{
	
	}
	~CheesePizza()
	{

	}

	virtual void Prepare()
	{
		printf("Prepareing for name %s\n", _Name.c_str());
		_Dough = _Factory->CreathDough();
		_Sauce = _Factory->CreateSauce();
		_Cheese = _Factory->CreateCheese();
	}

private:
	PizzaIngredientFactory* _Factory;
};
#endif //CHEESE_PIZZA_H_