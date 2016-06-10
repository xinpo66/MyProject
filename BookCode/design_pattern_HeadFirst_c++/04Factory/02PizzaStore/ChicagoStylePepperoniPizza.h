#ifndef CHICAGO_STYLE_PEPPERONI_PIZZA_H_
#define CHICAGO_STYLE_PEPPERONI_PIZZA_H_

//////////////////////////////////////////////////////////////////////////
//
// 2016-1-9 23:32
// Simple Xu
//
//////////////////////////////////////////////////////////////////////////

#include "Pizza.h"

class ChicagoStylePepperoniPizza : public Pizza
{
public:
	ChicagoStylePepperoniPizza();
	virtual ~ChicagoStylePepperoniPizza();

	virtual void Prepare();
};

#endif //CHICAGO_STYLE_PEPPERONI_PIZZA_H_