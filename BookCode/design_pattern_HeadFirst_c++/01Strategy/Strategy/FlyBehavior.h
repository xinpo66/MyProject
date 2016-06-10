#ifndef FLYBEHAVIOR_H_
#define FLYBEHAVIOR_H_

//////////////////////////////////////////////////////////////////////////
//
// 2016/4/21 21:06 Simple Xu
// 飞行父类，给出所有的具体飞行行为类所需要的接口
//////////////////////////////////////////////////////////////////////////
#include <stdio.h>

class FlyBehavior
{
public:
	FlyBehavior(){}
	virtual ~FlyBehavior(){}

	virtual void Fly() = 0;
};

class FlyWithWings: public FlyBehavior
{
public:
	FlyWithWings(){}
	~FlyWithWings(){};

	void Fly()
	{
		printf("I'm flying\n");
	}
};

class FlyNoWay : public FlyBehavior
{
public:
	FlyNoWay(){}
	~FlyNoWay(){}

	void Fly()
	{
		printf("I can't fly\n");
	}
};

class FlyRocketPowered : public FlyBehavior
{
public:
	FlyRocketPowered(){}
	~FlyRocketPowered(){}

	void Fly()
	{
		printf("I'm flying with a rocket!\n");
	}
};

#endif//FLYBEHAVIOR_H_