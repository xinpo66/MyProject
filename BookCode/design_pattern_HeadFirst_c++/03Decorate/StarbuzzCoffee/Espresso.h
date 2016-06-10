#ifndef ESPRESSO_H_
#define ESPRESSO_H_

//////////////////////////////////////////////////////////////////////////
//
// 2016/4/12 21:12 Simple Xu
// Å¨Ëõ¿§·È
//////////////////////////////////////////////////////////////////////////

#include "Beverage.h"
class Espresso : public Beverage
{
public:
	Espresso()
	{
		_Description = "Espresso";
	}
	virtual ~Espresso(){}

	virtual double cost()
	{
		return 1.99;
	}
};

#endif//ESPRESSO_H_