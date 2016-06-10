#pragma once 
#include "Pizza.h"

class CheesePizza : public Pizza
{
public:
	CheesePizza();
	virtual ~CheesePizza();

	void Prepare();
	void Bake();
	void Cut();
	void Box();
};
