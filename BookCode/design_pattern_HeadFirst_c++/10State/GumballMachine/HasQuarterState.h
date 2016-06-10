#ifndef HASQUARTER_STATE_H_
#define HASQUARTER_STATE_H_

#include <stdio.h>
//#include <sp.hpp>

#include "State.h"
#include "Machine.h"

class HasQuarterState:public CState
{   
public:
	HasQuarterState(Machine* Gumball)
	{
		_Gumball = Gumball;
	}
	~HasQuarterState()
	{

	}

	void InsertQuarter()
	{
		printf("you can't inserted another quarter\n");
	}

	void EjectQuarter()
	{
		printf("quarter returned\n");
		_Gumball->SetState( _Gumball->GetNoQuarterState() );
	}

	void TurnCrank()
	{
		printf("you turned......\n");
	}

	void Dispense()
	{
		printf("no dispensed \n");
	}

private:
	Machine* _Gumball;
};

#endif //HASQUARTER_STATE_H_