/*
 * main.cpp
 *
 *  Created on: Sep 30, 2014
 *      Author: Nikhil
 */
#include "Pizza.h"
#include "PizzaStore.h"
#include "NYStore.h"
#include "ChicagoStore.h"
#include "NYStyleCheesePizza.h"
#include "NYStyleClamPizza.h"
#include "ChicagoStore.h"
#include "ChicagoStyleCheesePizza.h"
#include "ChicagoStyleClamPizza.h"

int main()
{
	PizzaStore* nystore = new NYStore();
	nystore->orderPizza("cheese");

	PizzaStore* chicagostore = new ChicagoStore();
	chicagostore->orderPizza("cheese");
	return 0;
}



//Abstract classes or for that matter any class cannot be inherited privately in C++ as the sub class cannot be inherited.
