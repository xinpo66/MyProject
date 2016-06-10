#ifndef NYPIZZAINGREDIENTFACTORY_H
#define NYPIZZAINGREDIENTFACTORY_H

//////////////////////////////////////////////////////////////////////////
//
// 2016/3/12 23
//
//
//////////////////////////////////////////////////////////////////////////
#include "PizzaIngredientFactory.h"

class NYPizzaIngredientFactory : public PizzaIngredientFactory
{
public:
	NYPizzaIngredientFactory(){}
	virtual ~NYPizzaIngredientFactory(){}

	Dough* CreathDough()
	{
		return new ThinCrustDough();
	}
	Sauce* CreateSauce()
	{
		return new MarinaraSauce();
	}
	Cheese* CreateCheese()
	{
		return new ReggianoCheese();
	}
};

#endif //NYPIZZAINGREDIENTFACTORY_H