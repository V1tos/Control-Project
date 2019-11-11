#include "MobilePhone.h";




void Mobile::CreateMobile() {

	cout << "Enter name (ex: Samsung, Apple): ";
	cin >> mobileName;
	cout << "Enter country: ";
	cin >> devCountry;
	cout << "Enter display's diagonal (in): ";
	cin >> displayDiagonal;
	cout << "Enter main camera's megapixels count: ";
	cin >> mainCamera;
	cout << "Enter front camera's megapixels count: ";
	cin >> frontCamera;
	cout << "Enter RAM's memory (Gb): ";
	cin >>  RAMmemory;
	cout << "Enter mobile's memory (Gb): ";
	cin >> memory;
	cout << "Enter batterys capacity (mA*h): ";
	cin >> batteryCapacity;
	cout << "Enter mobile's weight (g): ";
	cin >> weight;
	cout << "Enter safeguard (month): ";
	cin >> safeGuard;
	cout << "Enter price (UAH): ";
	cin >> price;
	cout << "Enter count: ";
	cin >> count;
}



void Mobile::ShowMobileInfo() {
	cout << "Name:             " << mobileName << endl;
	cout << "Author country:   " << devCountry << endl;
	cout << "Display:          " << displayDiagonal << " in"  << endl;
	cout << "Main camera:      " << mainCamera << " Mp" << endl;
	cout << "Front camera:     " << frontCamera << " Mp" << endl;
	cout << "RAM:              " << RAMmemory << " Gb" << endl;
	cout << "Memory:           " << memory <<" Gb" << endl;
	cout << "Battery capacity: " << batteryCapacity << " mA*h" << endl;
	cout << "Weight:           " << weight << " g" << endl;
	cout << "Safeguard:        " << safeGuard << " month" << endl;
	cout << "Price:            " << price << " UAH" << endl;
	cout << "Count:            " << count << endl;
}