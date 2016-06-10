#include <sp.hpp>

#include "Waitress.h"

#include "DinerMenu.h"
#include "PancakeHouseMenu.h"

int main(int argc,char* argv[])
{
	/*SP<PancakeHouseMenu> Pan(new PancakeHouseMenu());
	std::vector<SP<MenuItem>> MenuItems = Pan->GetItems();*/

	SP<DinerMenu> Diner(new DinerMenu());
	SP<PancakeHouseMenu> Pancake( new PancakeHouseMenu());
	WaitRess Wait(Diner,Pancake);
	Wait.PrintMenu();
	return 0;
}