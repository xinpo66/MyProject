#ifndef COMPOSITE_ITERATOR_H_
#define COMPOSITE_ITERATOR_H_

#include <stack>

#include "Iterator.h"
#include "MenuComponent.h"

class CompositeIterator : public Iterator
{
public:
	CompositeIterator(std::vector< SP<MenuComponent> > Menus)
	{
		_Menus = Menus;
	}

	~CompositeIterator(){}

	virtual bool HasNext()
	{

	}
	virtual SP<MenuComponent> Next()
	{

	}
protected:
private:
	std::vector< SP<MenuComponent> > _Menus;
	std::stack< SP<MenuComponent> > _Stack;
};


#endif //COMPOSITE_ITERATOR_H_