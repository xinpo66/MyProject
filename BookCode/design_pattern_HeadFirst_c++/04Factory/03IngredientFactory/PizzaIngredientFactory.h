#ifndef PIZZAINGREDIENTFACTORY_H
#define PIZZAINGREDIENTFACTORY_H


/********************************************************************
	created:	2016/02/03  16:22  
	file ext:	h
	author:		Simple Xu
	
	purpose:	原料工厂抽象类
*********************************************************************/

#include "Ingredient.h"

class PizzaIngredientFactory
{
public:
	PizzaIngredientFactory(){}
	virtual ~PizzaIngredientFactory(){}

	//在接口中，每个原料都有一个对应的方法创建该原料
	//每个原料都是一个类
	virtual Dough* CreathDough() = 0;
	virtual Sauce* CreateSauce() = 0;
	virtual Cheese* CreateCheese() = 0;
	/*virtual Veggies[] CreateVeggies() = 0;
	virtual Pepperoni CreatePepperoni() = 0;
	virtual Clams CreateClams() = 0;*/
protected:
private:
};


#endif //PIZZAINGREDIENTFACTORY_H