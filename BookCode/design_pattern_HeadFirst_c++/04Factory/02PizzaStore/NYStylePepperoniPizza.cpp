#include "NYStylePepperoniPizza.h"

#include <iostream>

NYStylePepperoniPizza::NYStylePepperoniPizza()
{
	SetName("NYStylePepperoniPizza");
}

NYStylePepperoniPizza::~NYStylePepperoniPizza()
{

}

void NYStylePepperoniPizza::Prepare()
{
	std::cout<<"Pizza::Prepare:"<<_Name.c_str()<<std::endl;
}