/*
 * Value.h
 *
 *  Created on: 11 mai 2020
 *      Author: Eddie
 */

#include <string>

#ifndef VALUE_H_
#define VALUE_H_

using namespace std;

class Value {
public:
	Value(string label, string unit);
	virtual ~Value();
	string getString();
	string getLabel();
	void setData(void* data);
protected:
	virtual string getStringData() = 0;
	string label;
	string unit;
	void* data;

};

#endif /* VALUE_H_ */
