/*
 * CPUComponent.cpp
 *
 *  Created on: 11 mai 2020
 *      Author: Eddie
 */

#include "CPUComponent.h"
#include "CPUGlobalSensor.h"

CPUComponent::CPUComponent() : Component("CPU") {
	this->addSensor(new CPUGlobalSensor());

}

CPUComponent::~CPUComponent() {
	// TODO Auto-generated destructor stub
}

