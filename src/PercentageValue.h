/*
 * PercentageValue.h
 *
 *  Created on: 11 mai 2020
 *      Author: Eddie
 */

#ifndef PERCENTAGEVALUE_H_
#define PERCENTAGEVALUE_H_

#include <string>

#include "Value.h"

using namespace std;

class PercentageValue: public Value {
public:
	PercentageValue(string label);
	virtual ~PercentageValue();
	string getStringData();
};

#endif /* PERCENTAGEVALUE_H_ */
