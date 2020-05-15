/*
 * TestComponent.cpp
 *
 *  Created on: 15 mai 2020
 *      Author: Eddie
 */

#include "TestComponent.h"
#include "TestSensor.h"

TestComponent::TestComponent() : Component("Test Component") {
	TestSensor* ts = new TestSensor();
	this->addSensor(ts);

}

TestComponent::~TestComponent() {
	// TODO Auto-generated destructor stub
}

