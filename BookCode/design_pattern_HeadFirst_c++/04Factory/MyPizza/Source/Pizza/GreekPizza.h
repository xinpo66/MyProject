#pragma once 
#include "Pizza.h"

class GreekPizza : public Pizza
{
public:
	GreekPizza();
	virtual ~GreekPizza();

	void Prepare();
	void Bake();
	void Cut();
	void Box();
};
