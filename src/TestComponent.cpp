/*
 * TestComponent.cpp
 *
 *  Created on: 7 mai 2020
 *      Author: Eddie
 */

#include <iostream>

#include "TestSensor.h"
#include "TestComponent.h"

using namespace std;

TestComponent::TestComponent() : Component("TestComponent") {
	cout << "New component " << this->name << endl;
	TestSensor* testSensor = new TestSensor();
	this->addSensor(testSensor);
}

TestComponent::~TestComponent() {
	// TODO Auto-generated destructor stub
}

