#ifndef BEVERAGE_H_
#define BEVERAGE_H_

//////////////////////////////////////////////////////////////////////////
//
// 2016/4/12 20:39 Simple Xu
// 饮料的抽象类
//////////////////////////////////////////////////////////////////////////
#include <string>

class Beverage
{
public:
	Beverage(){}
	virtual ~Beverage()
	{
		_Description = " UnKnown Beverage ";
	}

	std::string GetDescription()
	{
		return _Description;
	}

	virtual double cost() = 0;
protected:
	std::string _Description;
};

#endif //BEVERAGE_H_