#ifndef ADAPTER_H_
#define ADAPTER_H_

//////////////////////////////////////////////////////////////////////////
//
// 2016/4/16 Simple Xu
// ����������ʹ�ö��ؼ̳С�
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include "Adaptee.h"
#include "Target.h"


class Adapter : public Adaptee,public Target
{
public:
	Adapter() {}
	virtual ~Adapter(){}

	virtual void Request()
	{
		this->SpecificRequest();
	}
};

#endif