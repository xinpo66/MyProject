#ifndef PIZZASTORE_H_
#define PIZZASTORE_H_


//////////////////////////////////////////////////////////////////////////
//
//2015.12.15 23:47
//PizzaStoreµÄ³éÏóÀà
//
//////////////////////////////////////////////////////////////////////////


#include <string>

class Pizza;
class PizzaStore
{
public:
	PizzaStore();
	virtual ~PizzaStore();
	Pizza* OrderPizza(std::string type);

	virtual Pizza* CeatePizza(std::string)=0;
};

#endif //PIZZASTORE_H_