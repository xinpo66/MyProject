#ifndef CEILINGFANMEDIUMCOMMAND_H_
#define CEILINGFANMEDIUMCOMMAND_H_

//////////////////////////////////////////////////////////////////////////
//
// 2016/4/9 17:11 Simple Xu
// µõÉÈMediumÄ£Ê½
//////////////////////////////////////////////////////////////////////////

#include "Command.h"
#include "CeilingFan.h"

class CeilingFanMediumCommand : public Command
{
public:
	CeilingFanMediumCommand(CeilingFan* C)
	{
		_CeilingFan = C;
	}
	virtual ~CeilingFanMediumCommand(){}

	virtual void Execute()
	{
		_FanPreState = _CeilingFan->GetSpeed();
		_CeilingFan->Medium();
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

#endif//CEILINGFANMEDIUMCOMMAND_H_