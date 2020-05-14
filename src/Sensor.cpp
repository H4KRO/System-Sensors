/*
 * Sensor.cpp
 *
 *  Created on: 7 mai 2020
 *      Author: Eddie
 */

#include <vector>

#include "Sensor.h"

Sensor::Sensor(std::string name) {
	this->name = name;
}

Sensor::~Sensor() {
	// TODO Auto-generated destructor stub
}

vector<Value*> Sensor::getValues(){ // @suppress("Ambiguous problem")
	return this->values;
}

void Sensor::addValue(Value* value){
	this->values.push_back(value);
}
