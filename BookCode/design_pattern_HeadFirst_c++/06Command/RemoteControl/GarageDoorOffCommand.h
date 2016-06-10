#ifndef GARAGE_DOOR_OFF_COMMAND_H_
#define GARAGE_DOOR_OFF_COMMAND_H_

//////////////////////////////////////////////////////////////////////////
//
// 2016/4/5 22:40 ³µ¿â¿ªÃÅÃüÁî
// Simple Xu
//////////////////////////////////////////////////////////////////////////
#include "GarageDoor.h"

class GarageDoorOffCommand : public Command
{
public:
	GarageDoorOffCommand(GarageDoor* Garage)
	{
		_GarageDoor = Garage;
	}
	virtual ~GarageDoorOffCommand(){}

	virtual void Execute()
	{
		_GarageDoor->Off();
	}

	virtual void Undo()
	{
		_GarageDoor->On();
	}
private:
	GarageDoor* _GarageDoor;

};

#endif //GARAGE_DOOR_OFF_COMMAND_H_