/*
 * Component.cpp
 *
 *  Created on: 7 mai 2020
 *      Author: Eddie
 */

#include <iostream>
#include <vector>

#include "Component.h"
#include "Sensor.h"

using namespace std;

Component::Component(string name) {
	this->name = name;

}

Component::~Component() {
	// TODO Auto-generated destructor stub
}

string Component::getName(){
	return this->name;
}

vector<Sensor*> Component::getSensors(){
	return this->sensors;
}

void Component::addSensor(Sensor* sensor){
	this->sensors.push_back(sensor);
}

void Component::compute(){
	for(vector<Sensor*>::iterator sensorsIterator = this->sensors.begin(); sensorsIterator != this->sensors.end(); ++sensorsIterator){
		(*sensorsIterator)->compute();
	}
}

vector<Value*> Component::getValues(){
	vector<Value*> values;
	for(vector<Sensor*>::iterator sensorsIterator = this->sensors.begin(); sensorsIterator != this->sensors.end(); ++sensorsIterator){
		vector<Value*> sensorValues = (*sensorsIterator)->getValues();
		values.insert(values.end(), sensorValues.begin(), sensorValues.end());
	}
	return values;
}

string Component::getStringReport(){
	string report = "";
	vector<Value*> values = this->getValues();
	for(vector<Value*>::iterator valuesIterator = values.begin(); valuesIterator != values.end(); ++valuesIterator){
		report += (*valuesIterator)->getString() + "\n";
	}
	return report;
}

