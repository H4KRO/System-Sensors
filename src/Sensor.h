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
	Value* value;
	Sensor(std::string name);
	virtual ~Sensor();
};

#endif /* SENSOR_H_ */
