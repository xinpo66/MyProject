#ifndef WAITRESS_H_
#define WAITRESS_H_

#include <sp.hpp>
#include <stdio.h>

#include "DinerMenu.h"
#include "PancakeHouseMenu.h"

class WaitRess
{
public:
	WaitRess(SP<DinerMenu> Diner,SP<PancakeHouseMenu> Pancake)
	{
		_Diner = Diner;
		_Pancake = Pancake;
	}
	virtual~WaitRess(){}

	void PrintMenu()
	{
		SP<Iterator> IterDiner = _Diner->CreateIterator();
		PrintMenu(IterDiner);
		SP<Iterator> IterPancake = _Pancake->CreateIterator();
		PrintMenu(IterPancake);
	}

	void PrintMenu(SP<Iterator> Iter)
	{
		while(Iter->HasNext())
		{
			SP<MenuItem> Item = Iter->Next();
			printf("%s,%s,%f\n",Item->GetName().c_str(),Item->GetDescription().c_str(),Item->GetPrice());
		}
	}

private:
	SP<DinerMenu> _Diner;
	SP<PancakeHouseMenu> _Pancake;
};

#endif//WAITRESS_H_