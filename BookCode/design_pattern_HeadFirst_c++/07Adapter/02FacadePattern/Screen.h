#ifndef SCREEN_H_
#define SCREEN_H_

#include <stdio.h>

class Screen
{
public:
	Screen(){}
	~Screen(){}

	void Down()
	{
		printf("Screen Down\n");
	}

	void Up()
	{
		printf("Screen Up\n");
	}
};

#endif//SCREEN_H_