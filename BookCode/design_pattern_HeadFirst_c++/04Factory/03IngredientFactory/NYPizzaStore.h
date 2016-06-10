#ifndef NYPIZZASTORE_H_
#define NYPIZZASTORE_H_

//////////////////////////////////////////////////////////////////////////
//
// 2016/3/15 22:27 Simple Xu
// Å¦Ô¼ÉÌµê
//////////////////////////////////////////////////////////////////////////

#include "Pizza.h"
#include "PizzaStore.h"
#include "CheesePizza.h"
#include "ClamPizza.h"
#include "NYPizzaIngredientFactory.h"

class NYPizzaStore : public PizzaStore
{
public:
	NYPizzaStore(){}
	~NYPizzaStore(){}

	virtual Pizza* CeatePizza(std::string Name)
	{
		Pizza* Pizza = NULL;
		PizzaIngredientFactory* Factory = new NYPizzaIngredientFactory();
		if ( Name.compare("cheese") == 0)
		{
			Pizza = new CheesePizza(Factory);
			Pizza->SetName("New York style Cheese Pizza");
		}
		else if ( Name.compare("clam") == 0)
		{
			Pizza = new ClamPizza(Factory);
			Pizza->SetName("New York style clam Pizza");
		}

		return Pizza;
	}
protected:
private:
};

#endif //NYPIZZASTORE_H_