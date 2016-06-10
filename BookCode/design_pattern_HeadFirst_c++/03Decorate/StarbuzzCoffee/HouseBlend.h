#ifndef HOUSEBLEND_H_
#define HOUSEBLEND_H_

//////////////////////////////////////////////////////////////////////////
//
// 2016/4/10 21:13 Simple Xu
// ◊€∫œ“˚¡œ¿‡
//////////////////////////////////////////////////////////////////////////

#include "Beverage.h"

class HouseBlend : public Beverage
{
public:
	HouseBlend()
	{
		_Description = "HouseBlend";
	}

	virtual double cost()
	{
		return 0.89;
	}
};

#endif//HOUSEBLEND_H_