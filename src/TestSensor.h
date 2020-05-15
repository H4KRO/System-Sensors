/*
 * TestSensor.h
 *
 *  Created on: 15 mai 2020
 *      Author: Eddie
 */

#ifndef SRC_TESTSENSOR_H_
#define SRC_TESTSENSOR_H_

#include "Sensor.h"

class TestSensor: public Sensor {
public:
	TestSensor();
	virtual ~TestSensor();
	void compute();
	float v;
};

#endif /* SRC_TESTSENSOR_H_ */
