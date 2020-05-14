/*
 * TestComponent.cpp
 *
 *  Created on: 14 mai 2020
 *      Author: Eddie
 */

#include "TestComponent.h"
#include "TestSensor.h"

TestComponent::TestComponent() : Component("Test Component") {
	this->addSensor(new TestSensor());

}

TestComponent::~TestComponent() {
	// TODO Auto-generated destructor stub
}

