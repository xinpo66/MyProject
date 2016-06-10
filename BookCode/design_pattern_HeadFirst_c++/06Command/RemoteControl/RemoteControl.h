#ifndef REMOTE_CONTROL_H_
#define REMOTE_CONTROL_H_

//////////////////////////////////////////////////////////////////////////
//
// 2016/4/6 21:53 Simple Xu
// Ò£¿ØÆ÷Àà Æß¸ö²å²Û
//////////////////////////////////////////////////////////////////////////

#include <vector>
#include "NoCommand.h"

#define SLOT_COUNT 7

class RemoteControl
{
public:
	RemoteControl()
	{
		for ( int i = 0; i <SLOT_COUNT; i++)
		{
			_OnCommands.push_back(new NoCommand());
			_OffCommands.push_back(new NoCommand());
		}
	}
	virtual ~RemoteControl()
	{

	}

	void SetCommand(int Slot, Command* OnCommand, Command* OffCommand)
	{
		if ( Slot >= SLOT_COUNT)
		{
			return;
		}
		//delete _OnCommands[Slot];
		//delete _OffCommands[Slot];

		_OnCommands[Slot] = OnCommand;
		_OffCommands[Slot] = OffCommand;
	}

	void OnButtonWasPushed(int Slot)
	{
		if ( Slot >= SLOT_COUNT)
		{
			return;
		}
		_OnCommands[Slot]->Execute();

		_LastCommand = _OnCommands[Slot];
	}

	void OffButtonWasPushed(int Slot)
	{
		if ( Slot >= SLOT_COUNT)
		{
			return;
		}
		_OffCommands[Slot]->Execute();

		_LastCommand = _OffCommands[Slot];
	}

	void UndoButtonWasPushed( )
	{
		_LastCommand->Undo();
	}
private:
	std::vector<Command*> _OnCommands;
	std::vector<Command*> _OffCommands;
	Command* _LastCommand;
};

#endif //REMOTE_CONTROL_H_