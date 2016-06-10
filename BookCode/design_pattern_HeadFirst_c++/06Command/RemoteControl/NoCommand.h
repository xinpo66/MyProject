#ifndef NOCOMMAND_H_
#define NOCOMMAND_H_

//////////////////////////////////////////////////////////////////////////
//
// 2016/4/6 21:56 Simple Xu
// ø’√¸¡Ó
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include "Command.h"

class NoCommand : public Command
{
public:
	NoCommand(){}
	virtual ~NoCommand(){}

	virtual void Execute()
	{
		printf("Nocommand \n");
	}

	virtual void Undo()
	{
		printf("Nocommand \n");
	}
};

#endif //NOCOMMAND_H_