#ifndef CHICAGOPIZZAINGREDIENTFACTORY_H
#define CHICAGOPIZZAINGREDIENTFACTORY_H

//////////////////////////////////////////////////////////////////////////
//
// 2016/3/14 22:52
// Ö¥¼Ó¸ç¹¤³§ 
//
//////////////////////////////////////////////////////////////////////////

#include "PizzaIngredientFactory.h"

class ChicagoPizzaIngredientFactory : public PizzaIngredientFactory
{
public:
	ChicagoPizzaIngredientFactory()
	{

	}

	virtual ~ChicagoPizzaIngredientFactory()
	{

	}

	Dough* CreathDough()
	{
		return new ThinCrustDough();
	}
	Sauce* CreateSauce()
	{
		return new PlumTomatoSauce();
	}
	Cheese* CreateCheese()
	{
		return new ReggianoCheese();
	}
protected:
private:
};

#endif //CHICAGOPIZZAINGREDIENTFACTORY_H