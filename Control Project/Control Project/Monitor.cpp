#include "Monitor.h"


void Monitor::CreateMonitor() {

	cout << "Enter name (ex: Samsung, LG): ";
	cin >> monitorName;
	cout << "Enter country: ";
	cin >> devCountry;
	cout << "Enter matrix type (ex: MVA, IPS): ";
	cin >> matrixType;
	cout << "Enter colour: ";
	cin >> colour;
	cout << "Enter display's diagonal (in): ";
	cin >> monitorsDisplay.diagonal;
	cout << "Enter refresh rate (GHz): ";
	cin >> monitorsDisplay.refreshRate;
	cout << "Enter weight (kg): ";
	cin >> weight;
	cout << "Enter colours count: ";
	cin >> coloursCount;
	cout << "Enter safeguard (month): ";
	cin >> safeGuard;
	cout << "Enter price (UAH): ";
	cin >> price;
	cout << "Enter count: ";
	cin >> count;
	
}

void Monitor::ShowMonitorInfo() {

	cout << "Name:             " << monitorName << endl;
	cout << "Author country:   " << devCountry << endl;
	cout << "Matrix:           " << matrixType << endl;
	cout << "Colour:           " << colour << endl;
	cout << "Diagonal:         " << monitorsDisplay.diagonal << " in" << endl;
	cout << "Refresh rate:     " << monitorsDisplay.refreshRate << endl;
	cout << "Colours count:    " << coloursCount << endl;
	cout << "Weight:           " << weight << " kg" << endl;
	cout << "Safeguard:        " << safeGuard << " month" << endl;
	cout << "Price:            " << price << " UAH" << endl;
	cout << "Count:            " << count << endl;
}