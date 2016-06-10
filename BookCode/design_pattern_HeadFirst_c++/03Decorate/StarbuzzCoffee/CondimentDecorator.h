#ifndef CONDIMENT_DECORATOR_H_
#define CONDIMENT_DECORATOR_H_

//////////////////////////////////////////////////////////////////////////
//
// 2016/4/12 21:03 Simple Xu
// 调料抽象类,也就是装饰者类
//////////////////////////////////////////////////////////////////////////

#include "Beverage.h"

class CondimentDecorator : public Beverage
{
public:
	CondimentDecorator(){}
	virtual ~CondimentDecorator(){}

	//所有的调料装饰者都必须重新实现
	virtual std::string GetDescription() = 0;
};

#endif//CONDIMENT_DECORATOR_H_