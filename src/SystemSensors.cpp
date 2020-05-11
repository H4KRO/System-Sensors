//============================================================================
// Name        : SystemSensors.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>

#include "Component.h"
#include "CPUComponent.h"

using namespace std;

int main() {
	vector<Component> components;
	CPUComponent* cpuComponent = new CPUComponent();
	cout << cpuComponent->sensors.at(0)->value->getString() << endl;
}
