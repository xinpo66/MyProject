#ifndef MACHINE_H_
#define MACHINE_H_

//#include<sp.hpp>

class CState;
class Machine
{
public:
	Machine(){}
	virtual ~Machine(){}

	virtual void SetState(CState* State) = 0;

	virtual CState* GetHasQuarterState() = 0;

	virtual CState* GetNoQuarterState() = 0;

	virtual CState* GetSoldState() = 0;
};

#endif