#ifndef COMPOSITE_ITERATOR_H_
#define COMPOSITE_ITERATOR_H_

#include <stack>

#include "Iterator.h"
#include "MenuComponent.h"

class Menu;

class CompositeIterator : public Iterator
{
public:
	CompositeIterator( SP<Iterator> Iter)
	{
		_Stack.push( Iter );
	}

	~CompositeIterator(){}

	virtual bool HasNext()
	{
		if ( _Stack.empty() )
		{
			return false;
		}
		else 
		{
			SP<Iterator> Iter = _Stack.top();
			if ( !Iter->HasNext() )
			{
				_Stack.pop();
				return HasNext();
			}
			else
			{
				return true;
			}
		}
	}
	virtual SP<MenuComponent> Next()
	{
		if ( HasNext() )
		{
			SP<Iterator> Iter = _Stack.top();
			SP<MenuComponent> MC = Iter->Next();
			//这个地方书上有bug,如果按照书上会出现重复遍历
			if ( typeid(*MC) == typeid(Menu) )
			//if ( typeid(*MC) == typeid(Menu) && typeid(*Iter) != typeid(CompositeIterator) )
			{
				_Stack.push( MC->CreateIterator() );
				//printf("%d_%d,push %s'iter\n",this,_Stack.size(),MC->GetName().c_str());
			}
			//printf("%d_%d,now is %s\n",this,_Stack.size(),MC->GetName().c_str());
			return MC;
		}
		else
		{
			return NULL;
		}
	}
protected:
private:
	//std::vector< SP<MenuComponent> > _Menus;
	std::stack< SP<Iterator> > _Stack;
};


#endif //COMPOSITE_ITERATOR_H_