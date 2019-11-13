#include "Laptop.h"



void Laptop::CreateLaptop() {

	cout << "\t\t\t\t\t\t\t\t\t\tEnter name (ex: Acer, Lenovo): ";
	cin >> laptopName;
	cout << "\t\t\t\t\t\t\t\t\t\tEnter country: ";
	cin >> devCountry;
	cout << "\t\t\t\t\t\t\t\t\t\tEnter pocessor name (ex: Intel, AMD): ";
	cin >> LaptopProcessor.name;
	cout << "\t\t\t\t\t\t\t\t\t\tEnter cores count: ";
	cin >> LaptopProcessor.coreCount;
	cout << "\t\t\t\t\t\t\t\t\t\tEnter clock frequency of processor (GHz): ";
	cin >> LaptopProcessor.freq1;
	cout << "\t\t\t\t\t\t\t\t\t\tEnter max frequency of processor (GHz): ";
	cin >> LaptopProcessor.freq2;
	cout << "\t\t\t\t\t\t\t\t\t\tEnter processors generation: ";
	cin >> LaptopProcessor.generation;
	cout << "\t\t\t\t\t\t\t\t\t\tEnter RAM's type (ex: DDR2, DDR3): ";
	cin >> LaptopRAM.type;
	cout << "\t\t\t\t\t\t\t\t\t\tEnter frequency of RAM (MHz): ";
	cin >> LaptopRAM.freq;
	cout << "\t\t\t\t\t\t\t\t\t\tEnter RAM's memory (Gb): ";
	cin >> LaptopRAM.memory;
	cout << "\t\t\t\t\t\t\t\t\t\tEnter videocard's name (ex: Nvidia, AMD): ";
	cin >> LaptopVideoCard.name;
	cout << "\t\t\t\t\t\t\t\t\t\tEnter videocard's memory (Gb): ";
	cin >> LaptopVideoCard.memory;
	cout << "\t\t\t\t\t\t\t\t\t\tEnter disk drive type (ex: HDD, SSD): ";
	cin >> LaptopDiskDrive.type;
	cout << "\t\t\t\t\t\t\t\t\t\tEnter disk drive memory (Gb): ";
	cin >> LaptopDiskDrive.memory;
	cout << "\t\t\t\t\t\t\t\t\t\tEnter displays refresh rate (GHz): ";
	cin >> LaptopDisplay.refreshRate;
	cout << "\t\t\t\t\t\t\t\t\t\tEnter display's diagonal (in): ";
	cin >> LaptopDisplay.diagonal;
	cout << "\t\t\t\t\t\t\t\t\t\tEnter computers weight (kg): ";
	cin >> weight;
	cout << "\t\t\t\t\t\t\t\t\t\tEnter laptops size: " << endl;
	cout << "\t\t\t\t\t\t\t\t\t\tWidth (mm): ";
	cin >> Size.width;
	cout << "\t\t\t\t\t\t\t\t\t\tHeight (mm): ";
	cin >> Size.height;
	cout << "\t\t\t\t\t\t\t\t\t\tLength (mm): ";
	cin >> Size.length;
	cout << "\t\t\t\t\t\t\t\t\t\tEnter batterys power (W*h): ";
	cin >> batteryPower;
	cout << "\t\t\t\t\t\t\t\t\t\tEnter safeguard (month): ";
	cin >> safeGuard;
	cout << "\t\t\t\t\t\t\t\t\t\tEnter price (UAH): ";
	cin >> price;
	cout << "\t\t\t\t\t\t\t\t\t\tEnter count: ";
	cin >> count;
}



void Laptop::ShowLaptopInfo() {
	cout << "\t\t\t\t\t\t\t\t\t\tName:             " << laptopName << endl;
	cout << "\t\t\t\t\t\t\t\t\t\tAuthor country:   " << devCountry << endl;
	cout << "\t\t\t\t\t\t\t\t\t\tProcessor:        " << LaptopProcessor.name << " " << LaptopProcessor.coreCount << " cores (" << LaptopProcessor.freq1 << " - " << LaptopProcessor.freq2 << " GHz) " << LaptopProcessor.generation << "th generation" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\tRAM:              " << LaptopRAM.type << "-" << LaptopRAM.freq << " MHz (" << LaptopRAM.memory << " Gb)" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\tVideocard:        " << LaptopVideoCard.name << " (" << LaptopVideoCard.memory << " Gb)" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\tDisk drive:       " << LaptopDiskDrive.type << " (" << LaptopDiskDrive.memory << " Gb)" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\tDisplay:          " << LaptopDisplay.diagonal << " in (" << LaptopDisplay.refreshRate << " GHz)" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\tWeight:           " << weight << " kg" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\tSize:             " << Size.width << "x" << Size.height << "x" << Size.length << " mm" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\tBattery power:    " << batteryPower << " W" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\tSafeguard:        " << safeGuard << " month" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\tPrice:            " << price << " UAH" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\tCount:            " << count << endl;
}