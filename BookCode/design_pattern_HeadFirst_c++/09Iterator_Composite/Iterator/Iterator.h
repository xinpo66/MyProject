#ifndef ITERATOR_H_
#define ITERATOR_H_

#include "MenuItem.h"

#include <sp.hpp>

class Iterator
{
public:
	Iterator(){}
	virtual~Iterator(){}

	virtual bool HasNext()=0;
	virtual SP<MenuItem> Next()=0;
};

#endif//ITERATOR_H_