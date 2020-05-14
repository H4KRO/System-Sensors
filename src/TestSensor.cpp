/*
 * TestSensor.cpp
 *
 *  Created on: 14 mai 2020
 *      Author: Eddie
 */

#include <vector>

#include "PercentageValue.h"
#include "TestSensor.h"

using namespace std;

TestSensor::TestSensor() : Sensor("TestSensor") {
	this->value = .5;
	PercentageValue* testValue = new PercentageValue("Valeur de test");
	testValue->setData(&this->value);
	this->addValue(testValue);
}

TestSensor::~TestSensor() {
	// TODO Auto-generated destructor stub
}

void TestSensor::compute(){
	vector<Value*> values = this->getValues();
	this->value += .1;
	values.at(0)->setData(&this->value);
}

