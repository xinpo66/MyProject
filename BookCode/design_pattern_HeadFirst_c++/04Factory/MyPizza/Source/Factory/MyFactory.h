#pragma once

#include "../Pizza/CheesePizza.h"
#include "../Pizza/PepperonoPizza.h"
#include "../Pizza/GreekPizza.h"

class MyFactory
{
public:
	MyFactory(){}
	~MyFactory(){}
	Pizza* createPizza(string type)
	{
		Pizza* pPizza = NULL;
		if("Cheese" == type)
		{
			pPizza = new CheesePizza();
		}
		else if("Pepperono" == type)
		{
			pPizza = new PepperonoPizza();
		}
		else if("Greek" == type)
		{
			pPizza = new GreekPizza();
		}

		return pPizza;
	}
};