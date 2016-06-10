#ifndef NYPIZZASTORE_H_
#define NYPIZZASTORE_H_

//////////////////////////////////////////////////////////////////////////
//
// NYPizzaStore
// Simple Xu
// 2016 1-7 22:47
//////////////////////////////////////////////////////////////////////////

#include "PizzaStore.h"
#include <string>

class Pizza;
class NYPizzaStore : public PizzaStore
{
public:
	NYPizzaStore();
	virtual ~NYPizzaStore();

	virtual Pizza* CeatePizza(std::string type);
};


#endif  //NYPIZZASTORE_H_

