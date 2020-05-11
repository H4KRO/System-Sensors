/*
 * PercentageValue.cpp
 *
 *  Created on: 11 mai 2020
 *      Author: Eddie
 */

#include <iostream>
#include <string>
#include <sstream>

#include "PercentageValue.h"

using namespace std;

PercentageValue::PercentageValue(string label) : Value(label, "%") {
	float defaultData = .0;
	this->setData(&defaultData);
}

PercentageValue::~PercentageValue() {
	// TODO Auto-generated destructor stub
}

string PercentageValue::getStringData() {
	float floatValue = *(float*)this->data;
	int intValue = floatValue * 100;
	stringstream ss;
	ss << intValue;
	string stringValue = ss.str();
	return stringValue;
}
