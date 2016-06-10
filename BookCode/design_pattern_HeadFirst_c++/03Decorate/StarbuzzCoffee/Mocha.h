#ifndef MOCHA_H_
#define MOCHA_H_

//////////////////////////////////////////////////////////////////////////
//
// 2016/4/12 21:32 Simple Xu
// Ħ��
//////////////////////////////////////////////////////////////////////////

#include "CondimentDecorator.h"

class Mocha : public CondimentDecorator
{
public:
	Mocha(Beverage* B)
	{
		_Beverage = B;
	}
	virtual ~Mocha(){}

	virtual std::string GetDescription()
	{
		return _Beverage->GetDescription() + ", Mocha.";
	}

	//ί�и���װ�ζ���
	virtual double cost()
	{
		return 0.20 + _Beverage->cost();
	}

private:
	Beverage* _Beverage;
};

#endif//MOCHA_H_