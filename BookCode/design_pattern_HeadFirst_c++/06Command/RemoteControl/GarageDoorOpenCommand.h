#ifndef GARAGE_DOOR_OPEN_COMMAND_H_
#define GARAGE_DOOR_OPEN_COMMAND_H_

//////////////////////////////////////////////////////////////////////////
//
// 2016/4/5 22:40 ³µ¿â¿ªÃÅÃüÁî
// Simple Xu
//////////////////////////////////////////////////////////////////////////
#include "GarageDoor.h"

class GarageDoorOpenCommand : public Command
{
public:
	GarageDoorOpenCommand(GarageDoor* Garage)
	{
		_GarageDoor = Garage;
	}
	virtual ~GarageDoorOpenCommand(){}

	virtual void Execute()
	{
		_GarageDoor->On();
	}

	virtual void Undo()
	{
		_GarageDoor->Off();
	}
private:
	GarageDoor* _GarageDoor;

};

#endif //GARAGE_DOOR_OPEN_COMMAND_H_