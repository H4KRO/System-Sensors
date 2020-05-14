/*
 * Sensor.h
 *
 *  Created on: 7 mai 2020
 *      Author: Eddie
 */

#ifndef SENSOR_H_
#define SENSOR_H_

#include <string>

#include "Value.h"

using namespace std;

class Sensor {
public:
	string name;
	Sensor(std::string name);
	virtual ~Sensor();
	virtual void compute() = 0;
	vector<Value*> getValues();
protected:
	vector<Value*> values;
	void addValue(Value*);
};

#endif /* SENSOR_H_ */
