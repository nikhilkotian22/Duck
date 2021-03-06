/*
 * Soy.h
 *
 *  Created on: Sep 24, 2014
 *      Author: Nikhil
 */

#ifndef SOY_H_
#define SOY_H_

#include "CondimentDecorator.h"

class Soy: public CondimentDecorator {
public:
	Soy(Beverage* beverage);
	~Soy();
	virtual  float getCost();
	virtual string getDescription();;
};

#endif /* SOY_H_ */
