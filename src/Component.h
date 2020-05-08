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
	string name;
	vector<Sensor*> sensors;
	Component(std::string name);
	virtual ~Component();
	void addSensor(Sensor* sensor);
};

#endif /* COMPONENT_H_ */
