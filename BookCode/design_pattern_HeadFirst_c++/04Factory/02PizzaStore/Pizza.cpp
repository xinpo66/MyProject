#include <iostream>
using namespace std;
#include "Pizza.h"

Pizza::Pizza()
{
	SetName("Pizza");
}

Pizza::~Pizza()
{
}

void Pizza::Prepare()
{
	cout<<"Pizza::Prepare:"<<_Name.c_str()<<endl;
}

void Pizza::Bake()
{
	cout<<"Pizza::Bake"<<endl;
}

void Pizza::Cut()
{
	cout<<"Pizza::Cut"<<endl;
}

void Pizza::Box()
{
	cout<<"Pizza::Box"<<endl;
}

std::string Pizza::GetName()
{
	return _Name;
}

void Pizza::SetName( std::string Name )
{
	_Name = Name;
}