#pragma once
#include "HardWare.h"


struct PC
{
	string computerName;
	string devCountry;
	unsigned int powerSupply;
	unsigned int weight;
	unsigned int safeGuard;
	Processor PCProcessor;
	RAM PCRAM;
	Videocard PCVideoCard;
	DiskDrive PCDiskDrive;
	unsigned int price;
	unsigned int count;

	struct { unsigned int width; unsigned int height; unsigned int length; }Size;

	void CreateComputer();
	void ShowComputerInfo();

};
