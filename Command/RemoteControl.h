/*
 * RemoteControl.h
 *
 *  Created on: Oct 5, 2014
 *      Author: Nikhil
 */

#ifndef REMOTECONTROL_H_
#define REMOTECONTROL_H_
#include "Command.h"
#include "NoCommand.h"

#define numberOfCommands 7

class RemoteControl {
public:
	RemoteControl()
	{
		NoCommand *obj = new NoCommand();
		for(int counter = 0; counter < numberOfCommands; counter++)
		{
			customCommand1_ON[counter] = obj;
			customCommand1_OFF[counter] = obj;
		}

		lastCommand = obj;
	}

	~RemoteControl()
	{

	}
	Command* customCommand1_ON[numberOfCommands];
	Command* customCommand1_OFF[numberOfCommands];
	Command* lastCommand;

	void setCommand(int slot, Command* on, Command* off)
	{
		customCommand1_ON[slot] = on;
		customCommand1_OFF[slot] = off;
	}

	void onButtonPushed(int slot)
	{
		customCommand1_ON[slot]->execute();
		lastCommand = customCommand1_ON[slot];
	}

	void offButtonPushed(int slot)
	{
		customCommand1_OFF[slot]->execute();
		lastCommand = customCommand1_OFF[slot];
	}

	void undoButtonPushed()
	{
		cout<<"Undo function pressed: ";
		lastCommand->undo();
	}
};

#endif /* REMOTECONTROL_H_ */
