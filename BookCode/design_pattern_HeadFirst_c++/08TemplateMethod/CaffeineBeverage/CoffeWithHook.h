#ifndef COFFEWITHHOOK_H_
#define COFFEWITHHOOK_H_

#include <stdio.h>
#include <string>
#include "CaffeineBeverageWithHook.h"

class CoffeWithHook : public CaffeineBeverageWithHook
{
public:
	CoffeWithHook(){}
	~CoffeWithHook(){}

	virtual void Brew()
	{
		printf("Dripping Coffee through filter\n");
	}

	virtual void AddCondiments()
	{
		printf("Adding Sugar and Milk\n");
	}

	bool CustomerWantsCondiments()
	{
		std::string StrIput = GetUserInput();
		if ( StrIput.length() <= 0 )
		{
			return false;
		}
		if ( StrIput[0] == 'Y' || StrIput[0] == 'y' )
		{
			return true;
		}
		return false;
	}

	std::string GetUserInput()
	{
		printf("Would you like milk and sugar with your coffee (y/n)?\n");
		char strInput[128];
		scanf("%s",strInput);
		return strInput;
	}
};

#endif//COFFEWITHHOOK_H_