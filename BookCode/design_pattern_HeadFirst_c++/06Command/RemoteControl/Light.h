#ifndef LIGHT_H_
#define LIGHT_H_

////////////////////////////////////////////////////////////////////////////////////////////////////
// file:	Light.h
//
// summary:	���̵���
// Simple Xu 2016/4/6 21:35
////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

class Light
{
public:
	Light(){}
	~Light(){};

	void On(){ printf("Light on\n"); }
	void Off(){ printf("Light off\n");}
};

#endif//LIGHT_H_