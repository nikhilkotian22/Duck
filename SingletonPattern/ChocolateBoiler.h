/*
 * ChocolateBoiler.h
 *
 *  Created on: Oct 5, 2014
 *      Author: Nikhil
 */

#ifndef CHOCOLATEBOILER_H_
#define CHOCOLATEBOILER_H_

#include<iostream>
using namespace std;

class ChocolateBoiler {

private:
	static ChocolateBoiler* boilerInstance;

public:
	static ChocolateBoiler* getInstance();

	void Boil()
	{
		cout<<"Start Boiling"<<endl;
	}

	void StopBoiling()
	{
		cout<<"Start Boiling"<<endl;
	}
private:
	ChocolateBoiler()
	{
		cout<<"New Instance created"<<endl;
	}
};

#endif /* CHOCOLATEBOILER_H_ */
