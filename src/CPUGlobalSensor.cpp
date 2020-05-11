/*
 * CPUGlobalSensor.cpp
 *
 *  Created on: 11 mai 2020
 *      Author: Eddie
 */

#include "CPUGlobalSensor.h"
#include "PercentageValue.h"

CPUGlobalSensor::CPUGlobalSensor() : Sensor("Global") {
	this->value = new PercentageValue("Global CPU charge");
}

CPUGlobalSensor::~CPUGlobalSensor() {
	// TODO Auto-generated destructor stub
}

