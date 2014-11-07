/*
 * Menu.h
 *
 *  Created on: Nov 6, 2014
 *      Author: Nikhil
 */

#ifndef MENU_H_
#define MENU_H_

#include "MenuComponent.h"
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
class Menu: public MenuComponent {
public:
	Menu(){}
	~Menu(){}

	Menu(string name, string description)
	{
		this->name = name;
		this->description = description;
	}

	void add(MenuComponent* menuObj)
	{
		menucomponentslist.push_back(menuObj);
	}

	void remove(MenuComponent* menuObj)
	{
		menucomponentslist.erase(std::remove(menucomponentslist.begin(),menucomponentslist.end(),menuObj),
							menucomponentslist.end());
	}

	MenuComponent* getChild(int counter)
	{
		int size = menucomponentslist.size();
		MenuComponent* returnObj = NULL;

		if( size > counter )
		{
			returnObj = menucomponentslist[counter];
		}
		return returnObj;
	}

	string getName()
	{
		return name;
	}

	string getDescription()
	{
		return description;
	}

	void print()
	{
		cout<<endl<<getName()<<endl;
		cout<<getDescription()<<endl;
		cout<<"--------------------------------"<<endl;

		std::vector<MenuComponent*>::iterator menuIterator;
		for(menuIterator = menucomponentslist.begin();
			menuIterator != menucomponentslist.end();
			++menuIterator)
		{
			MenuComponent* element = *menuIterator;
			element->print();
		}
	}
private:
	vector <MenuComponent*> menucomponentslist;
	string name;
	string description;
};

#endif /* MENU_H_ */

