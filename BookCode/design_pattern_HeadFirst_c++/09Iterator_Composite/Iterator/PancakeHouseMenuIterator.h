#ifndef PANCAKEHOUSEMENU_ITERATOR_H_
#define PANCAKEHOUSEMENU_ITERATOR_H_

#include <sp.hpp>
#include <vector>

#include "MenuItem.h"
#include "Iterator.h"

class PancakeHouseMenuIteraror : public Iterator
{
public:
	PancakeHouseMenuIteraror(std::vector<SP<MenuItem>> MenuItems)
	{	
		_Position = 0;
		_MenuItems = MenuItems;
	}
	~PancakeHouseMenuIteraror()
	{

	}

	virtual bool HasNext()
	{
		if ( _Position >= _MenuItems.size() || _MenuItems[_Position].Empty() )
		{
			return false;
		}
		return  true;
	}
	virtual SP<MenuItem> Next()
	{
		SP<MenuItem> Item = _MenuItems[_Position];
		_Position += 1;
		return Item;
	}
private:
	int _Position;
	std::vector<SP<MenuItem>> _MenuItems;
};

#endif//PANCAKEHOUSEMENU_ITERATOR_H_