/*
 * SubjectInterface.h
 *
 *  Created on: Sep 21, 2014
 *      Author: Nikhil
 */
//Learning was interfaces in c++
//Interfaces can be created with the help of abstract classes
//A pointer of an abstract class can be used
#ifndef SUBJECTINTERFACE_H_
#define SUBJECTINTERFACE_H_

#include "ObserverInterface.h"

class Subject_Interface {
public:
	virtual void registerObserver(Observer_Interface* O) = 0;
	virtual void removeObserver(Observer_Interface* O) = 0;
	virtual void notifyObserver() = 0;
};

#endif /* SUBJECTINTERFACE_H_ */
