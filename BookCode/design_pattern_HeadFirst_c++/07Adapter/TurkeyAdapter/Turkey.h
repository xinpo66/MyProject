#ifndef TURKEY_H_
#define TURKEY_H_

//////////////////////////////////////////////////////////////////////////
//
// 2016/4/16 9:40 Simple Xu
// �𼦽ӿ�
//////////////////////////////////////////////////////////////////////////

class Turkey
{
public:
	Turkey(){}
	virtual ~Turkey(){}

	virtual void gobble() = 0;
	virtual void fly() = 0;
};

#endif//TURKEY_H_