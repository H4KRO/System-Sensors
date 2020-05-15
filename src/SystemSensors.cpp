//============================================================================
// Name        : SystemSensors.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <string>

#include "TestComponent.h"

using namespace std;

int main() {
	TestComponent* tc = new TestComponent();
	for(int i = 0; i < 10; i++){
		tc->compute();
		cout << tc->getSensors().at(0)->getStringReport() << endl;
	}
}
