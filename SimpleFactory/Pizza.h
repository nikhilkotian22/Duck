/*
 * Pizza.h
 *
 *  Created on: Oct 5, 2014
 *      Author: Nikhil
 */

#ifndef PIZZA_H_
#define PIZZA_H_

class Pizza {
public:
	Pizza()
	{

	}

	~Pizza()
	{

	}

	virtual void prepare() = 0;
	virtual void bake() = 0;
	virtual void cut() = 0;
	virtual void box() = 0;
};

#endif /* PIZZA_H_ */
