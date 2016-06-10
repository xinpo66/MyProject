#ifndef CEILINGFANLOWCOMMAND_H_
#define CEILINGFANLOWCOMMAND_H_

//////////////////////////////////////////////////////////////////////////
//
// 2016/4/9 17:11 Simple Xu
// µõÉÈLowÄ£Ê½
//////////////////////////////////////////////////////////////////////////

#include "Command.h"
#include "CeilingFan.h"

class CeilingFanLowCommand : public Command
{
public:
	CeilingFanLowCommand(CeilingFan* C)
	{
		_CeilingFan = C;
	}
	virtual ~CeilingFanLowCommand(){}

	virtual void Execute()
	{
		_FanPreState = _CeilingFan->GetSpeed();
		_CeilingFan->Low();
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

#endif//CEILINGFANLOWCOMMAND_H_