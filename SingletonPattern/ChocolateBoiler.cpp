/*
 * ChocolateBoiler.cpp
 *
 *  Created on: Oct 5, 2014
 *      Author: Nikhil
 */

#include "ChocolateBoiler.h"

ChocolateBoiler* ChocolateBoiler::boilerInstance;

ChocolateBoiler* ChocolateBoiler::getInstance()
{
	if(boilerInstance == NULL)
	{
		boilerInstance = new ChocolateBoiler();
	}
	else
	{
		cout<<"Returning old instance"<<endl;
	}
	return boilerInstance;
}



