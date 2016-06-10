
#include <stdio.h>

#include "Espresso.h"
#include "DarkRoast.h"
#include "HouseBlend.h"

#include "Mocha.h"
#include "Whip.h"
#include "Soy.h"

int main(int argc,char* argv[])
{

	int a = 0;
	int b = a++;
	int c = ++a;
	int intArray[10] = {0};
	short* p = (short*)intArray;
	for (int i = 0; i <10; ++i)
	{
		*p = i;
		p+= 2;
	}

	Beverage* Es = new Espresso();
	printf("%s+$ %f\n",Es->GetDescription().c_str(),Es->cost());

	Beverage* beverage2 = new DarkRoast();
	beverage2 = new Mocha(beverage2);
	beverage2 = new Mocha(beverage2);
	beverage2 = new Whip(beverage2);
	printf("%s+$ %f\n",beverage2->GetDescription().c_str() ,beverage2->cost());

	Beverage* beverage3 = new HouseBlend();
	beverage3 = new Soy(beverage3);
	beverage3 = new Mocha(beverage3);
	beverage3 = new Whip(beverage3);
	printf("%s+$ %f\n",beverage3->GetDescription().c_str() , beverage3->cost());
	
	return 0;
}