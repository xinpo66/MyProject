#ifndef STATE_H_
#define STATE_H_

class CState
{
public:
	CState(){}
	virtual~CState(){}

	virtual void InsertQuarter() = 0;

	virtual void EjectQuarter() = 0;

	virtual void TurnCrank() = 0;

	virtual void Dispense() = 0;
};

#endif