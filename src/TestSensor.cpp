/*
 * TestSensor.cpp
 *
 *  Created on: 15 mai 2020
 *      Author: Eddie
 */

#include "Value.h"

#include "PercentageValue.h"
#include "TestSensor.h"

TestSensor::TestSensor() : Sensor("TestSensor") {
	PercentageValue* testValue = new PercentageValue("Test Value");
	this->v = .5;
	testValue->setData(&this->v);
	this->addValue(testValue);
}

TestSensor::~TestSensor() {
	// TODO Auto-generated destructor stub
}

void TestSensor::compute(){
	this->v += .01;
	this->setData("Test Value", &this->v);
}

