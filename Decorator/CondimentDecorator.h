/*
 * CondimentDecorator.h
 *
 *  Created on: Sep 24, 2014
 *      Author: Nikhil
 */

#ifndef CONDIMENTDECORATOR_H_
#define CONDIMENTDECORATOR_H_

#include "Beverage.h"

class CondimentDecorator: public Beverage {
public:
	Beverage* beverage;
};

#endif /* CONDIMENTDECORATOR_H_ */
