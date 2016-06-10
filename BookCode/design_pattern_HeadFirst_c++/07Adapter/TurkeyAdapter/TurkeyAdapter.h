#ifndef TURKEY_ADAPTER_H_
#define TURKEY_ADAPTER_H_

//////////////////////////////////////////////////////////////////////////
//
// 2016/4/16 9:54 Simple Xu
// ��ð��Ѽ�ӡ���ν����������
// ������ʵ����Ŀ��ӿڣ������б������ߵ�ʵ����
// ����������
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