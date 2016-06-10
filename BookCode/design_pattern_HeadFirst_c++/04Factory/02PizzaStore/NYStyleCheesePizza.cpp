#include "NYStyleCheesePizza.h"
#include <iostream>
using namespace std;

NYStyleCheesePizza::NYStyleCheesePizza()
{
	SetName("NYStyleCheesePizza");
}

NYStyleCheesePizza::~NYStyleCheesePizza()
{
	
}

void NYStyleCheesePizza::Prepare()
{
	cout<<"Pizza::Prepare:"<<_Name.c_str()<<endl;
}