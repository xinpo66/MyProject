#ifndef GUMBALL_MACHINE_H_
#define GUMBALL_MACHINE_H_

#include "NoQuarterState.h"
#include "HasQuarterState.h"

class GumballMachine : public Machine
{
public:
	GumballMachine( int NumberGumballs )
	{
		_Count = NumberGumballs;

		_NoQuarter =  new NoQuarterState(this);
		_HasQuarter = new HasQuarterState(this);

		if ( _Count > 0 )
		{
			_State = _NoQuarter;
		}
	}

	~GumballMachine()
	{

	}

	void SetState( CState* State)
	{
		_State = State;
	}

	void InsertQuarter()
	{
		_State->InsertQuarter();
	}

	CState* GetNoQuarterState()
	{
		return _NoQuarter;
	}

	CState* GetHasQuarterState()
	{
		return _HasQuarter;
	}

	CState* GetSoldState()
	{

	}
protected:
private:
	CState* _State;

	CState* _NoQuarter;
	CState* _HasQuarter;
	CState* _SoldState;

	int _Count;
};
#endif //GUMBALL_MACHINE_H_