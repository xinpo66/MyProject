#ifndef CEILINGFANHIGHCOMMAND_H_
#define CEILINGFANHIGHCOMMAND_H_

//////////////////////////////////////////////////////////////////////////
//
// 2016/4/9 17:11 Simple Xu
// µõÉÈhighÄ£Ê½
//////////////////////////////////////////////////////////////////////////

#include "Command.h"
#include "CeilingFan.h"

class CeilingFanHighCommand : public Command
{
public:
	CeilingFanHighCommand(CeilingFan* C)
	{
		_CeilingFan = C;
	}
	virtual ~CeilingFanHighCommand(){}

	virtual void Execute()
	{
		_FanPreState = _CeilingFan->GetSpeed();
		_CeilingFan->High();
	}

	virtual void Undo()
	{
		if ( _FanPreState == HIGH)
		{
			_CeilingFan->High();
		}
		else if ( _FanPreState == OFF)
		{
			_CeilingFan->Off();
		}
		else if ( _FanPreState == LOW)
		{
			_CeilingFan->Low();
		}
		else if ( _FanPreState == MEDIUM)
		{
			_CeilingFan->Medium();
		}
	}

private:
	FANSTATE _FanPreState;
	CeilingFan* _CeilingFan;
};

#endif//CEILINGFANHIGHCOMMAND_H_