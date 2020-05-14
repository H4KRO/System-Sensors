//============================================================================
// Name        : SystemSensors.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>

#include "TestComponent.h"

using namespace std;

int main() {
	TestComponent* testComponent = new TestComponent();
	cout << testComponent->getStringReport() << endl;
	testComponent->compute();
	cout << testComponent->getStringReport() << endl;
	cout << testComponent->getStringReport() << endl;
	testComponent->compute();
	cout << testComponent->getStringReport() << endl;
	cout << testComponent->getStringReport() << endl;
	testComponent->compute();
	cout << testComponent->getStringReport() << endl;
	cout << testComponent->getStringReport() << endl;
	testComponent->compute();
	cout << testComponent->getStringReport() << endl;
}
