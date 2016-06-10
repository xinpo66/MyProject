#include "Pizza.h"
#include "PizzaStore.h"

PizzaStore::PizzaStore()
{

}

PizzaStore::~PizzaStore()
{

}

Pizza* PizzaStore::OrderPizza( std::string type )
{
	Pizza* pPizza = NULL;
	pPizza = CeatePizza(type);

	pPizza->Prepare();
	pPizza->Bake();
	pPizza->Cut();
	pPizza->Box();

	return pPizza;
}