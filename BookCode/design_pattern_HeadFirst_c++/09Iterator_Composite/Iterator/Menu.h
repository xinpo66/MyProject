#ifndef MENU_H_
#define MENU_H_

#include <sp.hpp>
#include "Iterator.h"

class Menu
{
public:
	Menu(){}
	~Menu(){}

	virtual SP<Iterator> CreateIterator() = 0;
};

#endif //MENU_H_