#ifndef CHEESE_PIZZA_H_
#define CHEESE_PIZZA_H_

//////////////////////////////////////////////////////////////////////////
//
// 2016/3/15 21:47
// Simple Xu
// ֥ʿ����
//////////////////////////////////////////////////////////////////////////

#include "Pizza.h"
#include "PizzaIngredientFactory.h"
#include <stdio.h>

//������صĹ�������ԭ�ϡ���������ԭ��������ʹ�õĹ�����pizza������������Щԭ��
//����ֻ֪���������������
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