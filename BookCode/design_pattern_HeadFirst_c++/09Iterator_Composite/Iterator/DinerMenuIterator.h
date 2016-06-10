#ifndef DINERMENUITERATOR_H_
#define DINERMENUITERATOR_H_

#include <sp.hpp>

#include "MenuItem.h"
#include "Iterator.h"

class DinerMenuIterator : public Iterator
{
public:
	DinerMenuIterator(SP<MenuItem>* MenuItems, int Length)
	{
		_Length = Length;
		_Position = 0;
		_MenuItems = MenuItems;
	}

	~DinerMenuIterator()
	{
		
	}

	virtual bool HasNext()
	{
		SP<MenuItem> Item = _MenuItems[_Position];
		//if ( _Position >= _Length || Item.operator ->() == NULL)
		if ( _Position >= _Length || Item.Empty() )
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
	int _Length;
	int _Position;
	SP<MenuItem>* _MenuItems;
};

#endif //DINERMENUITERATOR_H_