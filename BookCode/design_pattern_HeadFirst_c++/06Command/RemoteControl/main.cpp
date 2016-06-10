
#include "RemoteControl.h"
#include "LightOffCommand.h"
#include "LightOnCommand.h"

#include "GarageDoorOffCommand.h"
#include "GarageDoorOpenCommand.h"

#include "StereoOffCommand.h"
#include "StereoOnWithCDCommand.h"

#include "CeilingFanHighCommand.h"
#include "CeilingFanLowCommand.h"
#include "CeilingFanMediumCommand.h"
#include "CeilingFanOffCommand.h"

#include "MacroCommand.h"

int main(int argc,char* argv[])
{
	RemoteControl* remote = new RemoteControl();

	Light* L = new Light();
	LightOnCommand* LightOn = new LightOnCommand(L);
	LightOffCommand* LightOff = new LightOffCommand(L);
	remote->SetCommand(0,LightOn,LightOff);
	//remote->OnButtonWasPushed(0);
	//remote->OffButtonWasPushed(0);
	//remote->UndoButtonWasPushed();

	GarageDoor* garage = new GarageDoor();
	GarageDoorOpenCommand* garageOpen = new GarageDoorOpenCommand(garage);
	GarageDoorOffCommand* garageOff = new GarageDoorOffCommand(garage);
	remote->SetCommand(1,garageOpen,garageOff);
	//remote->OnButtonWasPushed(1);
	//remote->OffButtonWasPushed(1);
	//remote->UndoButtonWasPushed();

	Stereo* Ste = new Stereo();
	StereoOnWithCDCommmand* SteOn = new StereoOnWithCDCommmand(Ste);
	StereoOffCommand* SteOff = new StereoOffCommand(Ste);
	//remote->SetCommand(2,SteOn,SteOff);
	//remote->OnButtonWasPushed(2);
	//remote->OffButtonWasPushed(2);

	CeilingFan* Ceil = new CeilingFan("room");
	CeilingFanHighCommand* HighCommand = new CeilingFanHighCommand(Ceil);
	CeilingFanLowCommand* LowCommand = new CeilingFanLowCommand(Ceil);
	CeilingFanMediumCommand* MediumCommand = new CeilingFanMediumCommand(Ceil);
	CeilingFanOffCommand* OffCommand = new CeilingFanOffCommand(Ceil);
	remote->SetCommand(3,HighCommand,OffCommand);
	//remote->OnButtonWasPushed(3);
	//remote->OffButtonWasPushed(3);
	//remote->UndoButtonWasPushed();
	//remote->SetCommand(4,MediumCommand,OffCommand);
	//remote->OnButtonWasPushed(4);
	//remote->OffButtonWasPushed(4);
	//remote->UndoButtonWasPushed();

	//ºêÃüÁî²âÊÔ
	std::vector<Command*> OnCommands;
	std::vector<Command*> OffCommands;
	LightOnCommand* MLightOn = new LightOnCommand(L);
	LightOffCommand* MLightOff = new LightOffCommand(L);
	OnCommands.push_back(LightOn);
	OnCommands.push_back(garageOpen);
	OffCommands.push_back(LightOff);
	OffCommands.push_back(garageOff);
	MacroCommand* MacroOn = new MacroCommand(OnCommands);
	MacroCommand* MacroOff = new MacroCommand(OffCommands);
	remote->SetCommand(0,MacroOn,MacroOff);
	remote->OnButtonWasPushed(0);
	remote->UndoButtonWasPushed();

	return 0;
}