#ifndef PIZZA_H_
#define PIZZA_H_

//////////////////////////////////////////////////////////////////////////
//  
// 2016/3/14 22:54
// Simple Xu
// ÅûÈø»ùÀà
//
//////////////////////////////////////////////////////////////////////////
#include <string>

#include "Ingredient.h"

class Pizza
{
public:
	Pizza();
	virtual ~Pizza();

	virtual void Prepare();
	virtual void Bake();
	virtual void Cut();
	virtual void Box();

	virtual std::string GetName();
	virtual void SetName(std::string Name);
protected:
	std::string _Name;

	Dough* _Dough;
	Sauce* _Sauce;
	Cheese* _Cheese;
};

#endif//PIZZA_H_