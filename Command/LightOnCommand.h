/*
 * LightOnCommand.h
 *
 *  Created on: Oct 5, 2014
 *      Author: Nikhil
 */

#ifndef LIGHTONCOMMAND_H_
#define LIGHTONCOMMAND_H_

#include "Command.h"
#include<iostream>
using namespace std;

class LightOnCommand: public Command {
public:
	LightOnCommand()
	{

	}
	~LightOnCommand()
	{

	}
	virtual void execute()
	{
		cout<<"Lights ON"<<endl;
	}
};

#endif /* LIGHTONCOMMAND_H_ */