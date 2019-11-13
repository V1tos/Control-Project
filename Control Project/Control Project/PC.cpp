#include "PC.h"



void PC::CreateComputer() {

	cout << "\t\t\t\t\tEnter name (ex: Asus, HP): ";
	cin >> computerName;
	cout << "\t\t\t\t\tEnter country : ";
	cin >> devCountry;
	cout << "\t\t\t\t\tEnter pocessor name (ex: Intel, AMD): ";
	cin >> PCProcessor.name;
	cout << "\t\t\t\t\tEnter cores count: ";
	cin >> PCProcessor.coreCount;
	cout << "\t\t\t\t\tEnter clock frequency of processor (GHz): ";
	cin >> PCProcessor.freq1;
	cout << "\t\t\t\t\tEnter max frequency of processor (GHz): ";
	cin >> PCProcessor.freq2;
	cout << "\t\t\t\t\tEnter processors generation: ";
	cin >> PCProcessor.generation;
	cout << "\t\t\t\t\tEnter RAM's type (ex: DDR2, DDR3): ";
	cin >> PCRAM.type;
	cout << "\t\t\t\t\tEnter frequency of RAM (MHz): ";
	cin >> PCRAM.freq;
	cout << "\t\t\t\t\tEnter RAM's memory (Gb): ";
	cin >> PCRAM.memory;
	cout << "\t\t\t\t\tEnter videocard's name (ex: Nvidia, AMD): ";
	cin >> PCVideoCard.name;
	cout << "\t\t\t\t\tEnter videocard's memory (Gb): ";
	cin >> PCVideoCard.memory;
	cout << "\t\t\t\t\tEnter disk drive type (ex: HDD, SSD): ";
	cin >> PCDiskDrive.type;
	cout << "\t\t\t\t\tEnter disk drive memory (Gb): ";
	cin >> PCDiskDrive.memory;
	cout << "\t\t\t\t\tEnter computers weight (kg): ";
	cin >> weight;
	cout << "\t\t\t\t\tEnter computers size: " << endl;
	cout << "\t\t\t\t\tWidth (mm): ";
	cin >> Size.width;
	cout << "\t\t\t\t\tHeight (mm): ";
	cin >> Size.height;
	cout << "\t\t\t\t\tLength (mm): ";
	cin >> Size.length;
	cout << "\t\t\t\t\tEnter power supply (W): ";
	cin >> powerSupply;
	cout << "\t\t\t\t\tEnter safeguard (month): ";
	cin >> safeGuard;
	cout << "\t\t\t\t\tEnter price (UAH): ";
	cin >> price;
	cout << "\t\t\t\t\tEnter count: ";
	cin >> count;
}



void PC::ShowComputerInfo() {
	cout << "\t\t\t\t\t\t\t\t\t\tName:             " << computerName << endl;
	cout << "\t\t\t\t\t\t\t\t\t\tAuthor country:   " << devCountry << endl;
	cout << "\t\t\t\t\t\t\t\t\t\tProcessor:        " << PCProcessor.name <<" " << PCProcessor.coreCount << " cores (" << PCProcessor.freq1 << " - " << PCProcessor.freq2 << " GHz) " << PCProcessor.generation << "th generation" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\tRAM:              " << PCRAM.type << "-" << PCRAM.freq << " MHz (" << PCRAM.memory << " Gb)" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\tVideocard:        " << PCVideoCard.name << " (" << PCVideoCard.memory << " Gb)" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\tDisk drive:       " << PCDiskDrive.type << " (" << PCDiskDrive.memory << " Gb)" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\tWeight:           " << weight << " kg" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\tSize:             " << Size.width << "x" << Size.height << "x" << Size.length << " mm" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\tPower supply:     " << powerSupply << " kW" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\tSafeguard:        " << safeGuard << " month" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\tPrice:            " << price << " UAH" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\tCount:            " << count << endl;
}