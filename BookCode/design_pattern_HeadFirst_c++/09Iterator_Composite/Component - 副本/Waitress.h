#ifndef WAITRESS_H_
#define WAITRESS_H_

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
		_AllMenus->Print();
	}
protected:
private:
	SP<MenuComponent> _AllMenus;
};

#endif//WAITRESS_H_