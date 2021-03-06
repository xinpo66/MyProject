#ifndef CEILINGFANOFFCOMMAND_H_
#define CEILINGFANOFFCOMMAND_H_

//////////////////////////////////////////////////////////////////////////
//
// 2016/4/9 17:11 Simple Xu
// ����Offģʽ
//////////////////////////////////////////////////////////////////////////

#include "Command.h"
#include "CeilingFan.h"

class CeilingFanOffCommand : public Command
{
public:
	CeilingFanOffCommand(CeilingFan* C)
	{
		_CeilingFan = C;
	}
	virtual ~CeilingFanOffCommand(){}

	virtual void Execute()
	{
		_FanPreState = _CeilingFan->GetSpeed();
		_CeilingFan->Off();
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

#endif//CEILINGFANOFFCOMMAND_H_