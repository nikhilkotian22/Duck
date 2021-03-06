/*
 * CurrentConditionsDisplay.cpp
 *
 *  Created on: Sep 22, 2014
 *      Author: Nikhil
 */

#include "CurrentConditionsDisplay.h"
#include <iostream>
using namespace std;

CurrentConditionsDisplay::CurrentConditionsDisplay(Subject_Interface* weatherData) {
	this->weatherData = weatherData;
	weatherData->registerObserver(this);
}

CurrentConditionsDisplay::~CurrentConditionsDisplay() {
	// TODO Auto-generated destructor stub
}

void CurrentConditionsDisplay::update(float temp, float humidity, float pressure)
{
	this->temperature = temp;
	this->humidity = humidity;
	display();
}

void CurrentConditionsDisplay::display()
{
	cout<<"Temperature"<<this->temperature<<endl;
	cout<<"Humidity"<<this->humidity<<endl;
}

