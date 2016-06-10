#ifndef PANCAKE_HOUSE_MENU_H_
#define PANCAKE_HOUSE_MENU_H_

#include <vector>
#include <string>

#include "Iterator.h"
#include "MenuItem.h"
#include "PancakeHouseMenuIterator.h"

class PancakeHouseMenu : public Menu
{
public:
	PancakeHouseMenu()
	{
		AddItem("K&B's Pancake Breakfast","Pancakes with scrambled eggs,and toast",true,2.99);
		AddItem("Regular Pancake Breakfast","Pancakes with fried eggs,sausage",false,2.99);
		AddItem("Blueberry Pancakes","Pancakes made with fresh blueberries",true,3.49);
		AddItem("Waffles","Waffles,with your choice of blueberries or strawberries",true,3.59);
	}
	~PancakeHouseMenu(){}

	void AddItem(std::string Name,std::string Description,
		bool Vegetarian,double Price)
	{
		SP<MenuItem>MI(new MenuItem(Name,Description,Vegetarian,Price));
		_MenuItems.push_back(MI);
	}

	/*std::vector<SP<MenuItem>> GetItems()
	{
		return _MenuItems;
	}*/

	SP<Iterator> CreateIterator()
	{
		return SP<Iterator>(new PancakeHouseMenuIteraror(_MenuItems));
	}
private:
	std::vector<SP<MenuItem>> _MenuItems;
};

#endif//PANCAKE_HOUSE_MENU_H_