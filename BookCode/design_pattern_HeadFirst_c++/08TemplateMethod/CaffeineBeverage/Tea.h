#ifndef TEA_H_
#define TEA_H_

//////////////////////////////////////////////////////////////////////////
//
// 2016/4/23 21:43 Simple Xu
//
//////////////////////////////////////////////////////////////////////////

#include "CaffeineBeverage.h"

class Tea : public CaffeineBeverage
{
public:
	Tea(){}
	~Tea(){}

	virtual void Brew()
	{
		printf("Steeping the tea\n");
	}

	virtual void AddCondiments()
	{
		printf("Adding Lemon\n");
	}
};

#endif //TEA_H_