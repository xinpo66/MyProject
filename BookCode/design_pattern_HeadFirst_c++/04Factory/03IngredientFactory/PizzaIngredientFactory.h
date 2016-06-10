#ifndef PIZZAINGREDIENTFACTORY_H
#define PIZZAINGREDIENTFACTORY_H


/********************************************************************
	created:	2016/02/03  16:22  
	file ext:	h
	author:		Simple Xu
	
	purpose:	ԭ�Ϲ���������
*********************************************************************/

#include "Ingredient.h"

class PizzaIngredientFactory
{
public:
	PizzaIngredientFactory(){}
	virtual ~PizzaIngredientFactory(){}

	//�ڽӿ��У�ÿ��ԭ�϶���һ����Ӧ�ķ���������ԭ��
	//ÿ��ԭ�϶���һ����
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