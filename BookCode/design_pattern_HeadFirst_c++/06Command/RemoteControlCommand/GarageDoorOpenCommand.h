#ifndef GARAGE_DOOR_OPEN_COMMAND_H_
#define GARAGE_DOOR_OPEN_COMMAND_H_

//////////////////////////////////////////////////////////////////////////
//
// 2016/4/5 22:40 ³µ¿â¿ªÃÅÃüÁî
// Simple Xu
//////////////////////////////////////////////////////////////////////////
#include "GarageDoorOpen.h"

class GarageDoorOpenCommand : public Command
{
public:
	GarageDoorOpenCommand(GarageDoorOpen* Garage)
	{
		_GarageDoorOpen = Garage;
	}
	virtual ~GarageDoorOpenCommand(){}

	virtual void Execute()
	{
		_GarageDoorOpen->On();
	}

private:
	GarageDoorOpen* _GarageDoorOpen;

};

#endif //GARAGE_DOOR_OPEN_COMMAND_H_