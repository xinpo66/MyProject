#ifndef CLAMPIZZA_H_
#define CLAMPIZZA_H_
//////////////////////////////////////////////////////////////////////////
// 
//  2016/3/15 22:17 Simple Xu
//  ∏ÚÚ€≈˚»¯
//////////////////////////////////////////////////////////////////////////

#include "Pizza.h"
#include "PizzaIngredientFactory.h"
#include <stdio.h>

class ClamPizza : public Pizza
{
public:
	ClamPizza(PizzaIngredientFactory* Factory)
		:_Factory(Factory)
	{

	}
	~ClamPizza()
	{

	}

	virtual void Prepare()
	{
		printf("Prepareing for name %s", _Name.c_str());
		_Dough = _Factory->CreathDough();
		_Sauce = _Factory->CreateSauce();
		_Cheese = _Factory->CreateCheese();
	}

private:
	PizzaIngredientFactory* _Factory;
};

#endif //CLAMPIZZA_H_