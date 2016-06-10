#ifndef TEAWITHHOOK_H_
#define TEAWITHHOOK_H_

#include <stdio.h>
#include <string>
#include "CaffeineBeverageWithHook.h"

class TeaWithHook : public CaffeineBeverageWithHook
{
public:
	TeaWithHook(){}
	~TeaWithHook(){}

	virtual void Brew()
	{
		printf("Steeping the tea\n");
	}

	virtual void AddCondiments()
	{
		printf("Adding Lemon\n");
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

#endif//TEAWITHHOOK_H_