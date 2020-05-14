/*
 * Component.h
 *
 *  Created on: 7 mai 2020
 *      Author: Eddie
 */

#ifndef COMPONENT_H_
#define COMPONENT_H_

#include <string>
#include <vector>

#include "Sensor.h"

using namespace std;

class Component {
public:
	Component(std::string name);
	virtual ~Component();
	string getName();
	vector<Sensor*> getSensors();
	void addSensor(Sensor* sensor);
	void compute();
	vector<Value*> getValues();
	string getStringReport();
protected:
	string name;
	vector<Sensor*> sensors;
private:

};

#endif /* COMPONENT_H_ */
