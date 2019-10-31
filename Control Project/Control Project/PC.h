#pragma once
#include <iostream>
#include <string>
#include "HardWare.h"

using namespace std;


struct PC
{
	string computerName;
	string devCountry;
	int powerSupply;
	int uahPrice, dolPrice;
	int weight;
	int safeGuard;
	Processor PCprocessor;
	RAM PCRAM;
	Videocard PCVideoCard;
	DiskDrive PCDiskDrive;

	struct { int width; int height; int length; }Size;

	void CreateComputer();
	void ShowComputerInfo();

};
