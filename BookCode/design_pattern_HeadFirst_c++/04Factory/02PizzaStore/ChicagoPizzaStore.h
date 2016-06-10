#ifndef CHICAGO_PIZZA_STORE_H
#define CHICAGO_PIZZA_STORE_H

#include "PizzaStore.h"
#include <string>

class Pizza;
class ChicagoPizzaStore : public PizzaStore
{
public:
	ChicagoPizzaStore();
	virtual ~ChicagoPizzaStore();

	virtual Pizza* CeatePizza(std::string type);
};

#endif //CHICAGO_PIZZA_STORE_H