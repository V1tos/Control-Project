#include "Monitor.h"


void Monitor::CreateMonitor() {

	cout << "\t\t\t\t\t\t\t\t\t\tEnter name (ex: Samsung, LG): ";
	cin >> monitorName;
	cout << "\t\t\t\t\t\t\t\t\t\tEnter country: ";
	cin >> devCountry;
	cout << "\t\t\t\t\t\t\t\t\t\tEnter matrix type (ex: MVA, IPS): ";
	cin >> matrixType;
	cout << "\t\t\t\t\t\t\t\t\t\tEnter colour: ";
	cin >> colour;
	cout << "\t\t\t\t\t\t\t\t\t\tEnter display's diagonal (in): ";
	cin >> monitorsDisplay.diagonal;
	cout << "\t\t\t\t\t\t\t\t\t\tEnter refresh rate (GHz): ";
	cin >> monitorsDisplay.refreshRate;
	cout << "\t\t\t\t\t\t\t\t\t\tEnter weight (kg): ";
	cin >> weight;
	cout << "\t\t\t\t\t\t\t\t\t\tEnter colours count: ";
	cin >> coloursCount;
	cout << "\t\t\t\t\t\t\t\t\t\tEnter safeguard (month): ";
	cin >> safeGuard;
	cout << "\t\t\t\t\t\t\t\t\t\tEnter price (UAH): ";
	cin >> price;
	cout << "\t\t\t\t\t\t\t\t\t\tEnter count: ";
	cin >> count;
	
}

void Monitor::ShowMonitorInfo() {

	cout << "\t\t\t\t\t\t\t\t\t\tName:             " << monitorName << endl;
	cout << "\t\t\t\t\t\t\t\t\t\tAuthor country:   " << devCountry << endl;
	cout << "\t\t\t\t\t\t\t\t\t\tMatrix:           " << matrixType << endl;
	cout << "\t\t\t\t\t\t\t\t\t\tColour:           " << colour << endl;
	cout << "\t\t\t\t\t\t\t\t\t\tDiagonal:         " << monitorsDisplay.diagonal << " in" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\tRefresh rate:     " << monitorsDisplay.refreshRate << endl;
	cout << "\t\t\t\t\t\t\t\t\t\tColours count:    " << coloursCount << endl;
	cout << "\t\t\t\t\t\t\t\t\t\tWeight:           " << weight << " kg" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\tSafeguard:        " << safeGuard << " month" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\tPrice:            " << price << " UAH" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\tCount:            " << count << endl;
}