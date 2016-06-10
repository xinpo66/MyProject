#ifndef ADAPTEE_H_
#define ADAPTEE_H_

//////////////////////////////////////////////////////////////////////////
//
// 2016/4/16 9:40 Simple Xu
// »ð¼¦½Ó¿Ú
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
class Adaptee
{
public:
	Adaptee(){}
	virtual ~Adaptee(){}

	void SpecificRequest()
	{
		printf("Adaptee SpecificRequest\n");
	}
};

#endif//TURKEY_H_