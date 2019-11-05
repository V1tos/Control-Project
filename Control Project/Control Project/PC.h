#pragma once
#include "HardWare.h"


struct PC
{
	string computerName;
	string devCountry;
	int powerSupply;
	int weight;
	int safeGuard;
	Processor PCProcessor;
	RAM PCRAM;
	Videocard PCVideoCard;
	DiskDrive PCDiskDrive;
	int price;

	struct { int width; int height; int length; }Size;

	void CreateComputer();
	void ShowComputerInfo();

};
