/*
 * StarbuzzCoffee.cpp
 *
 *  Created on: Sep 24, 2014
 *      Author: Nikhil
 */

#include "HouseBlend.h"
#include "Mocha.h"
#include "Soy.h"
#include "Whip.h"
#include "Espresso.h"
#include <iostream>
using namespace std;

int main()
{
	Beverage *beverage = new Espresso();
	cout<< beverage->getDescription()<<": $"<<beverage->getCost()<<endl;

	Beverage *beverage2 = new Espresso();
	beverage2 = new Soy(beverage2);
	beverage2 = new Mocha(beverage2);
	beverage2 = new Whip(beverage2);

	cout<< beverage2->getDescription()<<": $"<<beverage2->getCost()<<endl;
	return 0;
}

//Faced an interesting problem where functions called by beverage will be of the type beverage if they are implemented
//therefore the beverage should be a pure abstract class;

