/*
 * Mocha.cpp
 *
 *  Created on: Sep 24, 2014
 *      Author: Nikhil
 */

#include "Mocha.h"

Mocha::Mocha(Beverage* beverage) {
	this->beverage = beverage;
}

Mocha::~Mocha() {
	// TODO Auto-generated destructor stub
}

string Mocha::getDescription()
{
	return (beverage->getDescription() + ",Mocha");
}

float Mocha::getCost()
{
	return (beverage->getCost() + 0.2);
}
