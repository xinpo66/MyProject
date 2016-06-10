#ifndef STEREO_ON_WITH_CDCOMMAND_H_
#define STEREO_ON_WITH_CDCOMMAND_H_

//////////////////////////////////////////////////////////////////////////
//
// 2016/4/9 22:07 Simple Xu
// ÒôÏì¿ªÃüÁî
//////////////////////////////////////////////////////////////////////////
#include "Command.h"
#include "Stereo.h"

class StereoOnWithCDCommmand : public Command
{
public:
	StereoOnWithCDCommmand(Stereo* S)
	{
		_Stereo = S;
	}

	virtual ~StereoOnWithCDCommmand(){}

	void Execute()
	{
		_Stereo->On();
		_Stereo->SetCD();
		_Stereo->SetVolume(11);
	}

	virtual void Undo()
	{
		_Stereo->Off();
	}

private:
	Stereo* _Stereo;
};

#endif//STEREO_ON_WITH_CDCOMMAND_H_