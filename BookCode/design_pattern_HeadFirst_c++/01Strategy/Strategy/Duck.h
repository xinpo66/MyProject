#ifndef DUCK_H_
#define DUCK_H_

//////////////////////////////////////////////////////////////////////////
//
// 2016/4/21 21:36 Simple Xu
// 鸭子类。持有行为的引用。
//////////////////////////////////////////////////////////////////////////

#include <sp.hpp>

#include "FlyBehavior.h"
#include "QuackBehavior.h"

class Duck
{
public:
	Duck(){}
	virtual ~Duck(){}

	virtual void Display() = 0;

	void Swim()
	{
		printf("All ducks float, even decoys!\n");
	}

	void SetFly(SP<FlyBehavior> F)
	{
		_FlyBehavior = F;
	}

	void SetQuack(SP<QuackBehavior> Q)
	{
		_QuackBehavior = Q;
	}

	void PerformFly()
	{
		_FlyBehavior->Fly();
	}

	void PerformQuack()
	{
		_QuackBehavior->Quack();
	}

protected:
	SP<FlyBehavior> _FlyBehavior;
	SP<QuackBehavior> _QuackBehavior;
};

#endif //DUCK_H_