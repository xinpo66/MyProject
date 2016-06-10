#include "MyStore.h"
#include "../Pizza/Pizza.h"
#include "../Factory/MyFactory.h"

MyStore::MyStore()
{
}

MyStore::~MyStore()
{
}

Pizza* MyStore::OrderPizza(string type)
{
	Pizza* pPizza = NULL;
	MyFactory factory;
	pPizza = factory.createPizza(type);

	pPizza->Prepare();
	pPizza->Bake();
	pPizza->Cut();
	pPizza->Box();

	return pPizza;
}