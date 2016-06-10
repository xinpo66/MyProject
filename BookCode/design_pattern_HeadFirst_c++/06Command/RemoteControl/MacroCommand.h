#ifndef MACRO_COMMAND_H_
#define MACRO_COMMAND_H_

//////////////////////////////////////////////////////////////////////////
//
//  2016/4/10 21:47 Simple Xu
//  ∫Í√¸¡Ó
//////////////////////////////////////////////////////////////////////////

#include <vector>

#include "Command.h"

class MacroCommand : public Command
{
public:
	MacroCommand(std::vector<Command*> C)
	{
		_Commands = C;
	}

	virtual ~MacroCommand(){}

	virtual void Execute()
	{
		for ( int i = 0; i < _Commands.size(); i++)
		{
			_Commands[i]->Execute();
		}
	}
	virtual void Undo()
	{
		for ( int i = 0; i < _Commands.size(); i++)
		{
			_Commands[i]->Undo();
		}
	}

private:
	std::vector<Command*> _Commands;
};

#endif//MACRO_COMMAND_H_