#pragma once
#include "../include/stdafx.h"

class Pizza;
class MyStore
{
public:
	MyStore();
	virtual~MyStore();
	Pizza* OrderPizza(string type);

	//void test();
};

/*inline void MyStore::test()
{
}*/