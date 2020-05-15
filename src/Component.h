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

#include "ValuesContainer.h"
#include "Sensor.h"

using namespace std;

class Component : public ValuesContainer {
public:
	Component(std::string name);
	virtual ~Component();
	string getName();
	vector<Sensor*> getSensors();
	void addSensor(Sensor* sensor);
	void compute();
protected:
	string name;
	vector<Sensor*> sensors;
private:

};

#endif /* COMPONENT_H_ */
