#ifndef MENU_H_
#define MENU_H_

#include <string>
#include <vector>
#include <sp.hpp>
#include <stdio.h>

#include "MenuComponent.h"
//#include "ComponentIterator.h"

class Menu : public MenuComponent
{
public:
	Menu(std::string Name, std::string Description)
	{
		_Name = Name;
		_Description = Description;
	}

	~Menu()
	{

	}

	void Add( SP<MenuComponent> MenuCom )
	{
		_Menus.push_back( MenuCom );
	}

	void Remove( SP<MenuComponent> MenuCom )
	{

	}

	SP<MenuComponent> GetChild( int i )
	{
		return _Menus[i];
	}

	std::string GetName()
	{
		return _Name;
	}

	std::string GetDescription()
	{
		return _Description;
	}

	virtual SP<Iterator> CreateIterator()
	{
		//return SP<Iterator>(new ComponentIterator(_Menus));
		return SP<Iterator>(NULL);
	}

	void Print()
	{
		printf("  %s, %s \n ------- \n",_Name.c_str(),_Description.c_str());
		//for ( int i = 0; i < _Menus.size(); i++)
		//{
			//_Menus[i]->Print();
		//}
		/*std::vector< SP<MenuComponent> >::const_iterator Iter = _Menus.begin();
		for (; Iter != _Menus.end(); Iter ++)
		{
			SP<MenuComponent> dd = (*Iter);
			dd->Print();
		}*/
		//������ʵ��
		//SP<Iterator> MenuIter = CreateIterator(); 
		//if ( MenuIter->HasNext())
		//{
			//MenuIter->Next()->Print();
		//}
	}
protected:
private:
	std::string _Name;
	std::string _Description;
	std::vector< SP<MenuComponent> > _Menus;
};

#endif//MENU_H_