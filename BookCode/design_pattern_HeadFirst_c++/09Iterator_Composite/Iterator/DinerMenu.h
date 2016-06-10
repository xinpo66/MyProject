#ifndef DINERMENU_H_
#define DINERMENU_H_

#include <string>
#include <stdio.h>

#include "Menu.h"
#include "MenuItem.h"
#include "DinerMenuIterator.h"

class DinerMenu : public Menu
{
public:
	DinerMenu()
	{
		_NumberOfItems = 0;
		_MenuItems = new SP<MenuItem>[MAX_ITEMS];
		AddItem("Vegetarian BLT","(Fakin') Bacon with lettuce & tomato on whole wheat",true,2.99);
		AddItem("BLT","Bacon with lettuce & tomato on who whole wheat",false,2.99);
		AddItem("Soup of the day","soup of the day,with a side of potato salad",false,3.29);
		AddItem("Hotodog","A hot dog,with saurkraut,relish,onions,topped with cheese",false,3.05);
	}

	~DinerMenu()
	{
		delete []_MenuItems;
	}
	
	void AddItem(std::string Name,std::string Description,
		bool Vegetarian,double Price)
	{
		if ( _NumberOfItems >= MAX_ITEMS )
		{
			printf("Sorry,menu is full! Can't add item to menu");
		}
		else
		{
			_MenuItems[_NumberOfItems] = SP<MenuItem>(new MenuItem(Name,Description,Vegetarian,Price));
			_NumberOfItems += 1;
		}
	}

	/*SP<MenuItem>* GetItems()
	{
		return _MenuItems;
	}*/

	SP<Iterator> CreateIterator()
	{
		return SP<Iterator>(new DinerMenuIterator(_MenuItems,MAX_ITEMS));
	}

	int GetLength()	
	{
		return MAX_ITEMS;
	}
private:
	static const int MAX_ITEMS = 6;
	int _NumberOfItems;
	//SP<MenuItem> _MenuItems[];
	SP<MenuItem>* _MenuItems;
};

#endif//DINERMENU_H_