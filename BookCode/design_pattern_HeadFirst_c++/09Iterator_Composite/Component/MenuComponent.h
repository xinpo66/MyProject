#ifndef MENUCOMPONENT_H_
#define MENUCOMPONENT_H_

#include <vector>
#include <string>
#include <sp.hpp>

//#include "Iterator.h"

class Iterator;

class MenuComponent
{
public:
	MenuComponent(){}
	virtual~MenuComponent(){}

	virtual void Add( SP<MenuComponent> menuCom )
	{
		//_MenuComs.push_back( menuCom );
	}

	virtual void Remove( SP<MenuComponent> menuCom )
	{
		
	}

	virtual SP<MenuComponent>	GetChild( int i )
	{
		return NULL;
	}

	virtual std::string GetName()
	{
		return "";
	}

	virtual std::string GetDescription()
	{
		return "";
	}

	virtual double GetPrice()
	{
		return 0.00;
	}

	virtual bool IsVegetarian()
	{
		return false;
	}

	virtual void Print()
	{

	}

	virtual SP<Iterator> CreateIterator()
	{
		return SP<Iterator>(NULL);
	}
};

#endif //MENUCOMPONENT_H_