#ifndef POPCORNPOPER_H_
#define POPCORNPOPER_H_

#include <stdio.h>

class PopcornPopper
{
public:
	PopcornPopper(){}
	~PopcornPopper(){}

	void On()
	{
		printf("PopcornPopper On\n");
	}

	void Off()
	{
		printf("PopcornPopper Off\n");
	}

	void Pop()
	{
		printf("PopcornPopper Pop\n");
	}
};

#endif//POPCORNPOPER_H_