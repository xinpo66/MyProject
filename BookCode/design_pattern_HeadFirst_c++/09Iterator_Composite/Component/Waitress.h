#ifndef WAITRESS_H_
#define WAITRESS_H_

#include "Iterator.h"
#include "MenuComponent.h"

class Waitress
{
public:
	Waitress( SP<MenuComponent> AllMenus )
	{
		_AllMenus = AllMenus;
	}
	~Waitress(){}

	void Print()
	{
		//_AllMenus->Print();

		SP<Iterator> MenuIter = _AllMenus->CreateIterator(); 
		while ( MenuIter->HasNext())
		{
			MenuIter->Next()->Print();
		}
	}
protected:
private:
	SP<MenuComponent> _AllMenus;
};

#endif//WAITRESS_H_