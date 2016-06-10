#ifndef ITERATOR_H_
#define ITERATOR_H_

#include "MenuComponent.h"
#include <sp.hpp>

class Iterator
{
public:
	Iterator(){}
	virtual~Iterator(){}

	virtual bool HasNext()=0;
	//virtual SP<MenuComponent> Next()=0;
	virtual MenuComponent Next()=0;
};

#endif//ITERATOR_H_