#include "PizzaStore.h"
#include "NYPizzaStore.h"
#include "ChicagoPizzaStore.h"

int main(int argc,char* argv[])
{
	//PizzaStore pizzaStore;
	//pizzaStore.OrderPizza("");

	NYPizzaStore NyStore;
	NyStore.OrderPizza("cheese");

	NyStore.OrderPizza("pepperoni");

	ChicagoPizzaStore ChicagoStore;
	ChicagoStore.OrderPizza("cheese");
	ChicagoStore.OrderPizza("pepperoni");
	return 0;
}