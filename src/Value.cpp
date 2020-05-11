/*
 * Value.cpp
 *
 *  Created on: 11 mai 2020
 *      Author: Eddie
 */

#include "Value.h"

using namespace std;

Value::Value(string label, string unit) {
	this->label = label;
	this->unit = unit;
	this->data = nullptr;
}

Value::~Value() {
	// TODO Auto-generated destructor stub
}

void Value::setData(void* data){
	this->data = data;
}

string Value::getString(){
	return this->label + " " + this->getStringData() +  " " + this->unit;
}



