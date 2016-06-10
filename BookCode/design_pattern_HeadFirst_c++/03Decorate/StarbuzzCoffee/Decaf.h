#ifndef DECAF_H_
#define DECAF_H_
//////////////////////////////////////////////////////////////////////////
//
// 2016/4/12 21:25 Simple Xu
// µÕøß∑»“Ú
//////////////////////////////////////////////////////////////////////////

#include "Beverage.h"
class Decaf : public Beverage
{
public:
	Decaf()
	{
		_Description = "Decaf";
	}

	virtual ~Decaf(){}

	virtual double cost()
	{
		return 1.05;
	}
};

#endif //DECAF_H_