#ifndef NYSTYLE_PEPPERONI_PIZZA_H_
#define NYSTYLE_PEPPERONI_PIZZA_H_

//////////////////////////////////////////////////////////////////////////
//
// 2016-1-9 23:05
// Simple Xu
//
//////////////////////////////////////////////////////////////////////////

#include "Pizza.h"

#include <string>

class NYStylePepperoniPizza : public Pizza
{
public:
	NYStylePepperoniPizza();
	virtual ~NYStylePepperoniPizza();

	virtual void Prepare();
};

#endif //NYSTYLE_PEPPERONI_PIZZA_H_