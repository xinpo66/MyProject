#ifndef LIGHTONCOMMAND_H_
#define LIGHTONCOMMAND_H_
//////////////////////////////////////////////////////////////////////////
//
// 2016/4/5 21:53  打开灯的命令接口
// Simple Xu
//////////////////////////////////////////////////////////////////////////
#include "Light.h"
#include "Command.h"

class LightOnCommand : public Command
{
public:
	LightOnCommand(Light* & L)
	{
		_Light = L;
	}
	virtual ~LightOnCommand(){}

	virtual void Execute()
	{
		_Light->On();
	}

	virtual void Undo()
	{
		_Light->Off();
	}

private:
	Light* _Light;
};

#endif  //LIGHTONCOMMAND_H_