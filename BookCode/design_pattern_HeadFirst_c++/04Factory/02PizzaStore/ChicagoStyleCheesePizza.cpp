#include "ChicagoStyleCheesePizza.h"

#include <iostream>

ChicagoStyleCheesePizza::ChicagoStyleCheesePizza()
{
	SetName("ChicagoStyleCheesePizza");
}

ChicagoStyleCheesePizza::~ChicagoStyleCheesePizza()
{

}

void ChicagoStyleCheesePizza::Prepare()
{
	std::cout<<"Pizza::Prepare:"<<_Name.c_str()<<std::endl;
}