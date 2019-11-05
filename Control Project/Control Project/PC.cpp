#include "PC.h"



void PC::CreateComputer() {

	cout << "Enter name (ex: Samsung, LG) : ";
	cin >> computerName;
	cout << "Enter country : ";
	cin >> devCountry;
	cout << "Enter pocessor name (ex: Intel, AMD): ";
	cin >> PCProcessor.name;
	cout << "Enter cores count: ";
	cin >> PCProcessor.coreCount;
	cout << "Enter clock frequency of processor (GHz): ";
	cin >> PCProcessor.freq1;
	cout << "Enter max frequency of processor (GHz): ";
	cin >> PCProcessor.freq2;
	cout << "Enter processors generation: ";
	cin >> PCProcessor.generation;
	cout << "Enter RAM's type (ex: DDR2, DDR3): ";
	cin >> PCRAM.type;
	cout << "Enter frequency of RAM (MHz): ";
	cin >> PCRAM.freq;
	cout << "Enter RAM's memory (Gb): ";
	cin >> PCRAM.memory;
	cout << "Enter videocard's name (ex: Nvidia, AMD): ";
	cin >> PCVideoCard.name;
	cout << "Enter videocard's memory (Gb): ";
	cin >> PCVideoCard.memory;
	cout << "Enter disk drive type (ex: HDD, SSD): ";
	cin >> PCDiskDrive.type;
	cout << "Enter disk drive memory (Gb): ";
	cin >> PCDiskDrive.memory;
	cout << "Enter computers weight (kg): ";
	cin >> weight;
	cout << "Enter computers size: " << endl;
	cout << "Width (mm): ";
	cin >> Size.width;
	cout << "Height (mm): ";
	cin >> Size.height;
	cout << "Length (mm): ";
	cin >> Size.length;
	cout << "Enter power supply (kW): ";
	cin >> powerSupply;
	cout << "Enter safeguard (month): ";
	cin >> safeGuard;
	cout << "Enter price (UAH): ";
	cin >> price;
}



void PC::ShowComputerInfo() {
	cout << "Name:             " << computerName << endl;
	cout << "Author country:   " << devCountry << endl;
	cout << "Processor:        " << PCProcessor.name <<" " << PCProcessor.coreCount << " cores (" << PCProcessor.freq1 << " - " << PCProcessor.freq2 << " GHz) " << PCProcessor.generation << "th generation" << endl;
	cout << "RAM:              " << PCRAM.type << "-" << PCRAM.freq << " MHz (" << PCRAM.memory << " Gb)" << endl;
	cout << "Videocard:        " << PCVideoCard.name << " (" << PCVideoCard.memory << " Gb)" << endl;
	cout << "Disk drive:       " << PCDiskDrive.type << " (" << PCDiskDrive.memory << " Gb)" << endl;
	cout << "Weight:           " << weight << " kg" << endl;
	cout << "Size:             " << Size.width << "x" << Size.height << "x" << Size.length << " mm" << endl;
	cout << "Power supply:     " << powerSupply << " kW" << endl;
	cout << "Safeguard:        " << safeGuard << " month" << endl;
	cout << "Price:            " << price << " UAH" << endl;
}