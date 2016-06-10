#ifndef SOY_H_
#define SOY_H_

//////////////////////////////////////////////////////////////////////////
//
// 2016/4/12 22:03 Simple Xu
// 
//////////////////////////////////////////////////////////////////////////

#include "CondimentDecorator.h"

class Soy : public CondimentDecorator
{
public:
	Soy(Beverage* B)
	{
		_Beverage = B;
	}
	virtual ~Soy(){}

	virtual std::string GetDescription()
	{
		return _Beverage->GetDescription() + ", Soy.";
	}

	//委托给被装饰对象
	virtual double cost()
	{
		return 0.15 + _Beverage->cost();
	}

private:
	Beverage* _Beverage;
};

#endif //SOY_H_