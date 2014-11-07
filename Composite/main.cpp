/*
 * main.cpp
 *
 *  Created on: Nov 7, 2014
 *      Author: Nikhil
 */

#include "Menu.h"
#include "MenuItem.h"
#include "Waitress.h"

int main()
{
	MenuComponent* pancakeHouseMenu =
			new Menu("PanCakeHouseMenu","Breakfast");

	MenuComponent* dinerMenu =
			new Menu("Diner Menu", "Lunch");

	MenuComponent* cafeMenu =
			new Menu("Cafe Menu", "Dinner");

	MenuComponent* dessertMenu =
			new Menu("Dessert Menu", "Dessert Of Course");

	MenuComponent* allMenus =
			new Menu("All Menus", "All menus combined");

	allMenus->add(pancakeHouseMenu);
	allMenus->add(dinerMenu);
	allMenus->add(cafeMenu);
	allMenus->add(dessertMenu);

	MenuItem* menuItemObj = new MenuItem("Pasta",
			"Sphagetti with Marinanra Sauce",
			true, 3.89);
	dinerMenu->add(menuItemObj);

	dinerMenu->add(dessertMenu);

	menuItemObj = new MenuItem("ApplePie",
			"Apple pie with a flakey crust, topped with vanilla icecream",
			true, 4.00);
	dessertMenu->add(menuItemObj);

	Waitress* waitressObj = new Waitress(allMenus);

	waitressObj->printMenu();
	return 0;
}
