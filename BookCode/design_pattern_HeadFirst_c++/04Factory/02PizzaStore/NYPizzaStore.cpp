#include "NYPizzaStore.h"
#include "NYStyleCheesePizza.h"
#include "NYStylePepperoniPizza.h"

Pizza* NYPizzaStore::CeatePizza( std::string type )
{
	Pizza* pizza = NULL;
	if ( type.compare("cheese") == 0 )
	{
		pizza = new NYStyleCheesePizza();
	}
	else if ( type.compare("pepperoni") == 0)
	{
		pizza = new NYStylePepperoniPizza();
	}
	else if ( type.empty())
	{
		pizza = new Pizza();
	}
	 
	return pizza;
}

NYPizzaStore::~NYPizzaStore()
{

}

NYPizzaStore::NYPizzaStore()
{

}