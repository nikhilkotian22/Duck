/*
 * NYStore.h
 *
 *  Created on: Sep 30, 2014
 *      Author: Nikhil
 */

#ifndef NYSTORE_H_
#define NYSTORE_H_

#include "PizzaStore.h"

class NYStore: public PizzaStore {
public:
	NYStore();
	~NYStore();
protected:
	virtual Pizza* createPizza(string type);
};

#endif /* NYSTORE_H_ */
