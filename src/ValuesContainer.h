/*
 * ValuesContainer.h
 *
 *  Created on: 15 mai 2020
 *      Author: Eddie
 */

#ifndef SRC_VALUESCONTAINER_H_
#define SRC_VALUESCONTAINER_H_

#include <vector>

#include "Value.h"

using namespace std;

class ValuesContainer {
public:
	ValuesContainer();
	virtual ~ValuesContainer();
	vector<Value*> getValues();
	Value* getValue(string label);
	void addValue(Value*);
	void setData(string label, void* newValue);
	string getStringReport();
private:
	vector<Value*> values;
};

#endif /* SRC_VALUESCONTAINER_H_ */
