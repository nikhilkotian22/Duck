/*
 * WeatherData.h
 *
 *  Created on: Sep 21, 2014
 *      Author: Nikhil
 */

#ifndef WEATHERDATA_H_
#define WEATHERDATA_H_

#include "SubjectInterface.h"
#include "ObserverInterface.h"

class WeatherData: public Subject_Interface {
public:
	WeatherData();
	~WeatherData();
	virtual void registerObserver(Observer_Interface* O);
	virtual void removeObserver(Observer_Interface* O);
	virtual void notifyObserver();
	void measurementsChanged();
	void setMeasurements(float temperature, float pressure, float humidity);
private:
	Observer_Interface *observers[22];
	int tail;
	float temperature;
	float pressure;
	float humidity;
};

#endif /* WEATHERDATA_H_ */
