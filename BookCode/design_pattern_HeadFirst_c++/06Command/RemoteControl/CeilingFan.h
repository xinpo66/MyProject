#ifndef CEILINGFAN_H_
#define CEILINGFAN_H_

//////////////////////////////////////////////////////////////////////////
//
// 2016/4/9 11:38 Simple Xu
// ���ȳ�����
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

	//���ø�ת��
	void High()
	{
		_Speed = HIGH;
		printf("CeilingFan High \n");
	}

	//������ת��
	void Medium()
	{
		_Speed = MEDIUM;
		printf("CeilingFan Medium \n");
	}

	//���õ�ת��
	void Low()
	{
		_Speed = LOW;
		printf("CeilingFan Low \n");
	}

	//�رյ���
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