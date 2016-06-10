#ifndef MENUITEM_H_
#define MENUITEM_H_

#include <string>
#include <stdio.h>

#include "MenuComponent.h"

class MenuItem : public MenuComponent
{
public:
	MenuItem(std::string Name,std::string Description,
		bool Vegetarian,double Price)
		:_Name(Name)
		,_Description(Description)
		,_Vegetarian(Vegetarian)
		,_Price(Price)
	{
		
	}
	virtual~MenuItem(){};

	std::string GetName()
	{
		return _Name;
	}

	std::string GetDescription()
	{
		return _Description;
	}

	bool IsVegetarian()
	{
		return _Vegetarian;
	}

	double GetPrice()
	{
		return _Price;
	}

	void Print()
	{
		printf("  %s",_Name.c_str());
		if ( _Price )
		{
			printf(" V ");
		}
		printf(",%f  --%s\n",_Price,_Description.c_str());
	}

private:
	std::string _Name;
	std::string _Description;
	bool _Vegetarian;
	double _Price;
};

#endif//MENUITEM_H_