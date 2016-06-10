#ifndef CEILINGFAN_H_
#define CEILINGFAN_H_

//////////////////////////////////////////////////////////////////////////
//
// 2016/4/9 11:38 Simple Xu
// 吊扇厂商类
//////////////////////////////////////////////////////////////////////////

#include <string>
#include <stdio.h>

enum FANSTATE
{
	OFF = 0,
	LOW = 1,
	MEDIUM,
	HIGH
};

class CeilingFan
{
public:
	CeilingFan(std::string Location)
	{
		_Location = Location;
		_Speed = OFF;
	}
	virtual ~CeilingFan(){}

	//设置高转速
	void High()
	{
		_Speed = HIGH;
		printf("CeilingFan High \n");
	}

	//设置中转速
	void Medium()
	{
		_Speed = MEDIUM;
		printf("CeilingFan Medium \n");
	}

	//设置低转速
	void Low()
	{
		_Speed = LOW;
		printf("CeilingFan Low \n");
	}

	//关闭吊扇
	void Off()
	{
		_Speed = OFF;
		printf("CeilingFan Off \n");
	}

	FANSTATE GetSpeed()
	{
		return _Speed;
	}
private:
	FANSTATE _Speed;
	std::string _Location;
};

#endif //CEILINGFAN_H_