#ifndef MENUITEM_H_
#define MENUITEM_H_

#include <string>

class MenuItem
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

private:
	std::string _Name;
	std::string _Description;
	bool _Vegetarian;
	double _Price;
};

#endif//MENUITEM_H_