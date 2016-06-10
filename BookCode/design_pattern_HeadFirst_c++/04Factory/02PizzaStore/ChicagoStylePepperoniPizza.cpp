#include "ChicagoStylePepperoniPizza.h"

#include <iostream>

ChicagoStylePepperoniPizza::ChicagoStylePepperoniPizza()
{
	SetName("ChicagoStylePepperoniPizza");
}

ChicagoStylePepperoniPizza::~ChicagoStylePepperoniPizza()
{

}

void ChicagoStylePepperoniPizza::Prepare()
{
	std::cout<<"Pizza::Prepare:"<<_Name.c_str()<<std::endl;
}