#ifndef WHIP_H_
#define WHIP_H_
//////////////////////////////////////////////////////////////////////////
//
// 2016/4/12 22:03 Simple Xu
// 
//////////////////////////////////////////////////////////////////////////

#include "CondimentDecorator.h"

class Whip : public CondimentDecorator
{
public:
	Whip(Beverage* B)
	{
		_Beverage = B;
	}
	virtual ~Whip(){}

	virtual std::string GetDescription()
	{
		return _Beverage->GetDescription() + ", Whip.";
	}

	//委托给被装饰对象
	virtual double cost()
	{
		return 0.10 + _Beverage->cost();
	}

private:
	Beverage* _Beverage;
};

#endif