#ifndef CONDIMENT_DECORATOR_H_
#define CONDIMENT_DECORATOR_H_

//////////////////////////////////////////////////////////////////////////
//
// 2016/4/12 21:03 Simple Xu
// ���ϳ�����,Ҳ����װ������
//////////////////////////////////////////////////////////////////////////

#include "Beverage.h"

class CondimentDecorator : public Beverage
{
public:
	CondimentDecorator(){}
	virtual ~CondimentDecorator(){}

	//���еĵ���װ���߶���������ʵ��
	virtual std::string GetDescription() = 0;
};

#endif//CONDIMENT_DECORATOR_H_