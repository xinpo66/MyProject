#ifndef PIZZA_H_
#define PIZZA_H_

//////////////////////////////////////////////////////////////////////////
//
// Pizza≥ÈœÛ¿‡
// Simple Xu
// 2016-1-7 22:51
//
//////////////////////////////////////////////////////////////////////////
#include <string>

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
};

#endif //PIZZA_H_