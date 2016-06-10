
#pragma once

class Pizza
{
public:
	Pizza();
	virtual ~Pizza();

	virtual void Prepare();
	virtual void Bake();
	virtual void Cut();
	virtual void Box();
};