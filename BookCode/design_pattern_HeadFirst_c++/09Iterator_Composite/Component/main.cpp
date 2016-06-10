#include "Waitress.h"
#include "Menu.h"
#include "MenuItem.h"

int main(int argc,char* argv[])
{
	SP<MenuComponent> PancakeHouseMenu(new Menu("Pancake House Menu","Breakfast"));
	SP<MenuComponent> DinerMenu( new Menu("Diner Menu","Lunch"));
	SP<MenuComponent> CafeMenu( new Menu("Cafe Menu","Dinner"));
	SP<MenuComponent> DessertMenu( new Menu("Dessert Menu","Dessert of course!"));

	SP<MenuComponent> DessertMenuChild( new Menu("DessertChild Menu","Dessert of course!"));
	DessertMenu->Add(DessertMenuChild);


	SP<MenuComponent> AllMenus(new Menu("All Menus","All Menus Combined"));
	AllMenus->Add(PancakeHouseMenu);
	AllMenus->Add(DinerMenu);
	AllMenus->Add(CafeMenu);

	DinerMenu->Add( DessertMenu );
	//DessertMenu->Add( new MenuItem("Pasta","Spaghetti with Marinara Sauce,and a slice of sourdough vread",true,3.89));
	DessertMenuChild->Add( new MenuItem("Pasta","Spaghetti with Marinara Sauce,and a slice of sourdough vread",true,3.89));

	SP<Waitress> Client(new Waitress(AllMenus));
	Client->Print();
	return 0;
}