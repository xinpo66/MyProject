#include "SimpleRemoteControl.h"

#include "LightOnCommand.h"
#include "GarageDoorOpenCommand.h"

int main(int argc,char* argv[])
{
	SimpleRemoteControl* Control = new SimpleRemoteControl();
	Light* L = new Light();
	LightOnCommand* LOnCommand = new LightOnCommand(L);

	Control->SetCommand((Command*)LOnCommand);
	Control->ButtonWasPressed();

	GarageDoorOpen* Garage = new GarageDoorOpen();
	GarageDoorOpenCommand* GarageCommand = new GarageDoorOpenCommand(Garage);
	Control->SetCommand((Command*)GarageCommand);
	Control->ButtonWasPressed();

	return 0;
}