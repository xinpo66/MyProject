#ifndef DUCK_H_
#define DUCK_H_

//////////////////////////////////////////////////////////////////////////
//
// 2016/4/16 9:29 Simple Xu
// Ѽ�ӽӿ�
//////////////////////////////////////////////////////////////////////////

class Duck
{
public:
	Duck(){}
	virtual ~Duck(){}

	virtual void quack() = 0;
	virtual void fly() = 0;
};

#endif//DUCK_H_