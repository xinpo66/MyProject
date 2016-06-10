#ifndef NOQUARTER_STATE_H_
#define NOQUARTER_STATE_H_

#include <stdio.h>
//#include <sp.hpp>

#include "State.h"
#include "Machine.h"

class NoQuarterState : public CState
{
public:
	NoQuarterState(Machine* Gumball)
	{
		_Gumball = Gumball;
	}
	~NoQuarterState(){}

	void InsertQuarter()
	{
		printf("you inserted a quarter\n");
		_Gumball->SetState( _Gumball->GetHasQuarterState() );
	}

	void EjectQuarter()
	{
		printf("you haven't inserted a quarter\n");
	}

	void TurnCrank()
	{
		printf("you turned,but there is no quarter\n");
	}

	void Dispense()
	{
		printf("you need to pay first\n");
	}

private:
	Machine* _Gumball;
};

#endif //NOQUARTER_STATE_H_