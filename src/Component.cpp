/*
 * Component.cpp
 *
 *  Created on: 7 mai 2020
 *      Author: Eddie
 */

#include <iostream>
#include <vector>

#include "Sensor.h"
#include "TestSensor.h"
#include "Component.h"

using namespace std;

Component::Component(string name) {
	this->name = name;

}

Component::~Component() {
	// TODO Auto-generated destructor stub
}

void Component::addSensor(Sensor* sensor){
	this->sensors.push_back(sensor);
}

