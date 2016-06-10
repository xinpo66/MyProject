#ifndef TURKEY_ADAPTER_H_
#define TURKEY_ADAPTER_H_

//////////////////////////////////////////////////////////////////////////
//
// 2016/4/16 9:54 Simple Xu
// ��ð��Ѽ�ӡ���ν����������
// ������ʵ����Ŀ��ӿڣ������б������ߵ�ʵ����
//////////////////////////////////////////////////////////////////////////

#include "Duck.h"
#include "Turkey.h"

class TurkeyAdapter : public Duck
{
public:
	TurkeyAdapter(Turkey* T)
	{
		_Turkey = T;
	}
	virtual ~TurkeyAdapter(){}

	virtual void quack()
	{
		if( _Turkey != NULL)
		{
			_Turkey->gobble();
		}
	}
	virtual void fly()
	{
		for ( int i = 0 ; i <5; i++)
		{
			if( _Turkey != NULL)
			{
				_Turkey->fly();
			}
		}
	}

private:
	Turkey* _Turkey;
};

#endif