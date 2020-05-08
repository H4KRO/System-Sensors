/*
 * TestSensor.cpp
 *
 *  Created on: 7 mai 2020
 *      Author: Eddie
 */

#include <iostream>

#include "TestSensor.h"

using namespace std;

TestSensor::TestSensor() : Sensor("TestSensor") {
	cout << "New sensor " << this->name << endl;

}

TestSensor::~TestSensor() {
	// TODO Auto-generated destructor stub
}

