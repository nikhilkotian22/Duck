/*
 * PizzaStore.h
 *
 *  Created on: Oct 5, 2014
 *      Author: Nikhil
 */

#ifndef PIZZASTORE_H_
#define PIZZASTORE_H_
#include<string>
#include "Pizza.h"
#include "SimplePizzaFactory.h"
using namespace std;

class PizzaStore {
public:
	SimplePizzaFactory* simplePizzafactory;
	PizzaStore()
	{
		simplePizzafactory = new SimplePizzaFactory();
	}

	~PizzaStore()
	{

	}

	void orderPizza(string typeOfPizza )
	{
		Pizza* pizza = simplePizzafactory->createPizza(typeOfPizza);
		pizza->prepare();
		pizza->bake();
		pizza->cut();
		pizza->box();
	}
};

#endif /* PIZZASTORE_H_ */
