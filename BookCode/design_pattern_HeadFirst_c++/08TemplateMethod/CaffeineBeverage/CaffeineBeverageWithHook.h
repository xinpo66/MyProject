#ifndef CAFFEINEBEVERAGEWITHHOOK_H_
#define CAFFEINEBEVERAGEWITHHOOK_H_

//////////////////////////////////////////////////////////////////////////
//
// 2016/4/25 20:57 Simple Xu
// 
//////////////////////////////////////////////////////////////////////////

class CaffeineBeverageWithHook
{
public:
	CaffeineBeverageWithHook(){}

	virtual ~CaffeineBeverageWithHook(){}

	void PrepareRecipe()
	{
		BoilWater();
		Brew();
		PourInCup();
		if ( CustomerWantsCondiments() )
		{
			AddCondiments();
		}
	}

	virtual void Brew() = 0;

	virtual void AddCondiments() = 0;

	void BoilWater()
	{
		printf("Boiling water\n");
	}

	void PourInCup()
	{
		printf("Pouring into cup\n");
	}

	virtual bool CustomerWantsCondiments()
	{
		return true;
	}
};

#endif//CAFFEINEBEVERAGEWITHHOOK_H_