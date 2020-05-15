/*
 * ValuesContainer.cpp
 *
 *  Created on: 15 mai 2020
 *      Author: Eddie
 */

#include "ValuesContainer.h"

ValuesContainer::ValuesContainer() {
	// TODO Auto-generated constructor stub

}

ValuesContainer::~ValuesContainer() {
	// TODO Auto-generated destructor stub
}

vector<Value*> ValuesContainer::getValues(){
	return this->values;
}

Value* ValuesContainer::getValue(string label){
	Value* value = nullptr;
	for(vector<Value*>::iterator valuesIterator = this->values.begin(); valuesIterator != this->values.end(); ++valuesIterator){
		if((*valuesIterator)->getLabel() == label){
			value = (*valuesIterator);
		}
	}
	return value;
}

void ValuesContainer::addValue(Value* value){
	this->values.push_back(value);
}

void ValuesContainer::setData(string label, void* newValue){
	Value* value = this->getValue(label);
	if(value != nullptr){
		value->setData(newValue);
	}
}

string ValuesContainer::getStringReport(){
	string report = "";
	vector<Value*> values = this->getValues();
	for(vector<Value*>::iterator valuesIterator = values.begin(); valuesIterator != values.end(); ++valuesIterator){
		report += (*valuesIterator)->getString() + "\n";
	}
	return report;
}

