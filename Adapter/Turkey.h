/*
 * Turkey.h
 *
 *  Created on: Oct 29, 2014
 *      Author: Nikhil
 */

#ifndef TURKEY_H_
#define TURKEY_H_

class Turkey {
public:
	Turkey() {}
	~Turkey() {}

	virtual void gobble() = 0;
	virtual void shortFly() = 0;
};

#endif /* TURKEY_H_ */
