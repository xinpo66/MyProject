#include "ChicagoPizzaStore.h"
#include "ChicagoStyleCheesePizza.h"
#include "ChicagoStylePepperoniPizza.h"

ChicagoPizzaStore::ChicagoPizzaStore()
{
	
}

ChicagoPizzaStore::~ChicagoPizzaStore()
{

}

Pizza* ChicagoPizzaStore::CeatePizza( std::string type )
{
	Pizza* pizza = NULL;
	if ( type.compare("cheese") == 0 )
	{
		pizza = new ChicagoStyleCheesePizza();
	}
	else if ( type.compare("pepperoni") == 0 )
	{
		pizza = new ChicagoStylePepperoniPizza();
	}
	else if ( type.empty())
	{
		pizza = new Pizza();
	}

	return pizza;
}