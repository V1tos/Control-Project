#include "Laptop.h"



void Laptop::CreateLaptop() {

	cout << "Enter name (ex: Samsung, LG): ";
	cin >> laptopName;
	cout << "Enter country: ";
	cin >> devCountry;
	cout << "Enter pocessor name (ex: Intel, AMD): ";
	cin >> LaptopProcessor.name;
	cout << "Enter cores count: ";
	cin >> LaptopProcessor.coreCount;
	cout << "Enter clock frequency of processor (GHz): ";
	cin >> LaptopProcessor.freq1;
	cout << "Enter max frequency of processor (GHz): ";
	cin >> LaptopProcessor.freq2;
	cout << "Enter processors generation: ";
	cin >> LaptopProcessor.generation;
	cout << "Enter RAM's type (ex: DDR2, DDR3): ";
	cin >> LaptopRAM.type;
	cout << "Enter frequency of RAM (MHz): ";
	cin >> LaptopRAM.freq;
	cout << "Enter RAM's memory (Gb): ";
	cin >> LaptopRAM.memory;
	cout << "Enter videocard's name (ex: Nvidia, AMD): ";
	cin >> LaptopVideoCard.name;
	cout << "Enter videocard's memory (Gb): ";
	cin >> LaptopVideoCard.memory;
	cout << "Enter disk drive type (ex: HDD, SSD): ";
	cin >> LaptopDiskDrive.type;
	cout << "Enter disk drive memory (Gb): ";
	cin >> LaptopDiskDrive.memory;
	cout << "Enter displays refresh rate (GHz): ";
	cin >> LaptopDisplay.refreshRate;
	cout << "Enter display's diagonal (in): " << endl;
	cin >> LaptopDisplay.diagonal;
	cout << "Enter computers weight (kg): ";
	cin >> weight;
	cout << "Enter laptops size: " << endl;
	cout << "Width (mm): ";
	cin >> Size.width;
	cout << "Height (mm): ";
	cin >> Size.height;
	cout << "Length (mm): ";
	cin >> Size.length;
	cout << "Enter batterys power (W*h): ";
	cin >> batteryPower;
	cout << "Enter safeguard (month): ";
	cin >> safeGuard;
	cout << "Enter price (UAH): ";
	cin >> price;
}



void Laptop::ShowLaptopInfo() {
	cout << "Name:             " << laptopName << endl;
	cout << "Author country:   " << devCountry << endl;
	cout << "Processor:        " << LaptopProcessor.name << " " << LaptopProcessor.coreCount << " cores (" << LaptopProcessor.freq1 << " - " << LaptopProcessor.freq2 << " GHz) " << LaptopProcessor.generation << "th generation" << endl;
	cout << "RAM:              " << LaptopRAM.type << "-" << LaptopRAM.freq << " MHz (" << LaptopRAM.memory << " Gb)" << endl;
	cout << "Videocard:        " << LaptopVideoCard.name << " (" << LaptopVideoCard.memory << " Gb)" << endl;
	cout << "Disk drive:       " << LaptopDiskDrive.type << " (" << LaptopDiskDrive.memory << " Gb)" << endl;
	cout << "Display:          " << LaptopDisplay.diagonal << " in (" << LaptopDisplay.refreshRate << " GHz)" << endl;
	cout << "Weight:           " << weight << " kg" << endl;
	cout << "Size:             " << Size.width << "x" << Size.height << "x" << Size.length << " mm" << endl;
	cout << "Battery power:    " << batteryPower << " kW" << endl;
	cout << "Safeguard:        " << safeGuard << " month" << endl;
	cout << "Price:            " << price << " UAH" << endl;
}