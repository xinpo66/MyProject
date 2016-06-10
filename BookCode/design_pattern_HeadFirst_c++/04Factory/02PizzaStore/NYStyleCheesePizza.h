#ifndef NYSTYLECHEESEPIZZA_H_
#define NYSTYLECHEESEPIZZA_H_

//////////////////////////////////////////////////////////////////////////
// 
//  Å¦Ô¼Ö¥Ê¿·çÎ¶ÅûÈø
//  Simple Xu
//  2016-1-7 23:14
//
//////////////////////////////////////////////////////////////////////////
#include "Pizza.h"

#include <string>

class NYStyleCheesePizza : public Pizza
{
public:
	NYStyleCheesePizza();
	virtual ~NYStyleCheesePizza();

	virtual void Prepare();
};

#endif //NYSTYLECHEESEPIZZA_H_