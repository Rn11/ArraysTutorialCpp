//============================================================================
// Name        : Arrays2.cpp
// Author      : Rn11
// Version     :
// Copyright   : Your copyright notice
// Description : Temp
//============================================================================

#include <iostream>
using namespace std;

int main() {
	double temp[7];
	double maxTemp = -9999;
	double minTemp = 9999;
	double avg, sum;

	// for all days
	for (int i = 0; i<7; i++){
		// read inputs
		cout << "Geben Sie die Temperatur für den " << i+1 << ". Tag ein" << endl; // prints input prompt
		cin >> temp[i];
		// check for minmax
		if (temp[i] > maxTemp) {
			maxTemp =  temp[i];
		} else if (temp[i] < minTemp) {
			minTemp = temp[i];
		}
	}

	// calc avg
	for (int i = 0; i<7; i++) {
		sum += temp[i];
	}
	avg = sum / (sizeof(temp) / sizeof(*temp));
	//avg = sum / 7; //

	// output results
	cout << "Die Durchschnittstemperatur liegt bei " << avg  << "°C" << endl; // prints avg
	cout << "Die höchste Temperatur liegt bei " << maxTemp << "°C"  << endl; // prints max
	cout << "Die niedrigste Temperatur liegt bei " << minTemp << "°C" << endl; // prints min
	return 0;
}
