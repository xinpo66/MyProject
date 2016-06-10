#ifndef QUACKBEHAVIOR_H_
#define QUACKBEHAVIOR_H_

#include <stdio.h>

class QuackBehavior
{
public:
	QuackBehavior(){}
	virtual ~QuackBehavior(){}

	virtual void Quack() = 0;
};

class CQuack: public QuackBehavior
{
public:
	CQuack(){}
	~CQuack(){};

	void Quack()
	{
		printf("Quack\n");
	}
};

class MuteQuack : public FlyBehavior
{
public:
	MuteQuack(){}
	~MuteQuack(){}

	void Quack()
	{
		printf("<<<Silence>>\n");
	}
};

class SQuack : public FlyBehavior
{
public:
	SQuack(){}
	~SQuack(){}

	void Quack()
	{
		printf("SQuack\n");
	}
};

#endif//QUACKBEHAVIOR_H_