#include "GumballMachine.h"

int main(int argc,char* argv[])
{
	GumballMachine* MyGumball = new GumballMachine(10);
	MyGumball->InsertQuarter();

	return 0;
}