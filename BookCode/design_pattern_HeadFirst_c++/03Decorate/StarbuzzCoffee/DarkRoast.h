#ifndef DARK_ROAST_H_
#define DARK_ROAST_H_

//////////////////////////////////////////////////////////////////////////
//
// 2016/4/12 21:19 Simple Xu
// …Ó±∫øß∑»
//////////////////////////////////////////////////////////////////////////
#include "Beverage.h"

class DarkRoast : public Beverage
{
public:
	DarkRoast()
	{
		_Description = "DarkRoast";
	}
	virtual ~DarkRoast(){}

	virtual double cost()
	{
		return 0.99;
	}
};

#endif