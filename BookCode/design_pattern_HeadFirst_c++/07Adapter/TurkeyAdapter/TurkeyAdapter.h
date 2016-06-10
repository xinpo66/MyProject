#ifndef TURKEY_ADAPTER_H_
#define TURKEY_ADAPTER_H_

//////////////////////////////////////////////////////////////////////////
//
// 2016/4/16 9:54 Simple Xu
// 火鸡冒充鸭子。所谓的适配器。
// 适配器实现了目标接口，并持有被适配者的实例。
// 对象适配器
//////////////////////////////////////////////////////////////////////////

#include <sp.hpp>

#include "Duck.h"
#include "Turkey.h"

class TurkeyAdapter : public Duck
{
public:
	TurkeyAdapter(SP<Turkey> T)
	{
		_Turkey = T;
	}
	virtual ~TurkeyAdapter(){}

	virtual void quack()
	{
		_Turkey->gobble();
	}
	virtual void fly()
	{
		for ( int i = 0 ; i <5; i++)
		{
			_Turkey->fly();
		}
	}

private:
	SP<Turkey> _Turkey;
};

#endif