#ifndef SIMPLE_REMOTE_CONTROL_H_
#define SIMPLE_REMOTE_CONTROL_H_

//////////////////////////////////////////////////////////////////////////
//
// 2016/4/5 22:11 Ò£¿ØÆ÷Àà
// Simple Xu
//////////////////////////////////////////////////////////////////////////

#include "Command.h"

class SimpleRemoteControl
{
public:
	SimpleRemoteControl(){}
	virtual ~SimpleRemoteControl(){}
	
	void SetCommand( Command*  C)
	{
		_Slot = C;
	}

	void ButtonWasPressed()
	{
		_Slot->Execute();
	}
private:
	Command* _Slot;
};

#endif //SIMPLE_REMOTE_CONTROL_H_