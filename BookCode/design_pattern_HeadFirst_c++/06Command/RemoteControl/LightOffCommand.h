#ifndef LIGHTOFFCOMMAND_H_
#define LIGHTOFFCOMMAND_H_
//////////////////////////////////////////////////////////////////////////
//
// 2016/4/5 21:53  打开灯的命令接口
// Simple Xu
//////////////////////////////////////////////////////////////////////////
#include "Light.h"
#include "Command.h"

class LightOffCommand : public Command
{
public:
	LightOffCommand(Light* & L)
	{
		_Light = L;
	}
	virtual ~LightOffCommand(){}

	virtual void Execute()
	{
		_Light->Off();
	}

	virtual void Undo()
	{
		_Light->On();
	}
private:
	Light* _Light;
};

#endif  //LIGHTOFFCOMMAND_H_