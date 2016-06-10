#ifndef COMPONENT_ITERATOR_H_
#define COMPONENT_ITERATOR_H_

#include "Iterator.h"
//#include "MenuComponent.h"

class ComponentIterator : public Iterator
{
public:
	ComponentIterator(std::vector< SP<MenuComponent> > Menus)
	{
		_Position = 0;
		_Menus = Menus;
	}

	~ComponentIterator(){}

	virtual bool HasNext()
	{
		if ( _Position >= _Menus.size() || _Menus[_Position].Empty() )
		{
			return false;
		}
		return  true;
	}
	virtual SP<MenuComponent> Next()
	{
		//SP<MenuComponent> Item = _Menus[_Position];
		//_Position += 1;
		//return Item;
		return NULL;
	}
protected:
private:
	int _Position;
	std::vector< SP<MenuComponent> > _Menus;
};

#endif //COMPONENT_ITERATOR_H_