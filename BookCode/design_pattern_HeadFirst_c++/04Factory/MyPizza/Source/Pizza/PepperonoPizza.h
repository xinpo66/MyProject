#pragma once 
#include "Pizza.h"

class PepperonoPizza : public Pizza
{
public:
	PepperonoPizza();
	virtual ~PepperonoPizza();

	void Prepare();
	void Bake();
	void Cut();
	void Box();
};
