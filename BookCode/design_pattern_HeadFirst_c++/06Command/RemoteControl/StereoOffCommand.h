#ifndef STEREOOFFCOMMAND_H_
#define STEREOOFFCOMMAND_H_

//////////////////////////////////////////////////////////////////////////
//
// 2016/4/8 22£º59 Simple Xu
// ÒôÏì¹ØµÄÃüÁî
//////////////////////////////////////////////////////////////////////////

#include "Command.h"
#include "Stereo.h"

class StereoOffCommand : public Command
{
public:
	StereoOffCommand(Stereo* S) 
	{
		_Stereo = S;
	}

	virtual ~StereoOffCommand() {}

	void Execute()
	{
		_Stereo->Off();
	}

	virtual void Undo()
	{
		_Stereo->On();
		_Stereo->SetCD();
		_Stereo->SetVolume(11);
	}
private:
	Stereo* _Stereo;
};

#endif//STEREOOFFCOMMAND_H_