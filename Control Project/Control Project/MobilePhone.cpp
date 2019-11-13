#include "MobilePhone.h";




void Mobile::CreateMobile() {

	cout << "\t\t\t\t\t\t\t\t\t\tEnter name (ex: Samsung, Apple): ";
	cin >> mobileName;
	cout << "\t\t\t\t\t\t\t\t\t\tEnter country: ";
	cin >> devCountry;
	cout << "\t\t\t\t\t\t\t\t\t\tEnter display's diagonal (in): ";
	cin >> displayDiagonal;
	cout << "\t\t\t\t\t\t\t\t\t\tEnter main camera's megapixels count: ";
	cin >> mainCamera;
	cout << "\t\t\t\t\t\t\t\t\t\tEnter front camera's megapixels count: ";
	cin >> frontCamera;
	cout << "\t\t\t\t\t\t\t\t\t\tEnter RAM's memory (Gb): ";
	cin >>  RAMmemory;
	cout << "\t\t\t\t\t\t\t\t\t\tEnter mobile's memory (Gb): ";
	cin >> memory;
	cout << "\t\t\t\t\t\t\t\t\t\tEnter batterys capacity (mA*h): ";
	cin >> batteryCapacity;
	cout << "\t\t\t\t\t\t\t\t\t\tEnter mobile's weight (g): ";
	cin >> weight;
	cout << "\t\t\t\t\t\t\t\t\t\tEnter safeguard (month): ";
	cin >> safeGuard;
	cout << "\t\t\t\t\t\t\t\t\t\tEnter price (UAH): ";
	cin >> price;
	cout << "\t\t\t\t\t\t\t\t\t\tEnter count: ";
	cin >> count;
}



void Mobile::ShowMobileInfo() {
	cout << "\t\t\t\t\t\t\t\t\t\tName:             " << mobileName << endl;
	cout << "\t\t\t\t\t\t\t\t\t\tAuthor country:   " << devCountry << endl;
	cout << "\t\t\t\t\t\t\t\t\t\tDisplay:          " << displayDiagonal << " in"  << endl;
	cout << "\t\t\t\t\t\t\t\t\t\tMain camera:      " << mainCamera << " Mp" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\tFront camera:     " << frontCamera << " Mp" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\tRAM:              " << RAMmemory << " Gb" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\tMemory:           " << memory <<" Gb" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\tBattery capacity: " << batteryCapacity << " mA*h" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\tWeight:           " << weight << " g" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\tSafeguard:        " << safeGuard << " month" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\tPrice:            " << price << " UAH" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\tCount:            " << count << endl;
}