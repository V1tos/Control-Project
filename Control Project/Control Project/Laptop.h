#pragma once
#include "HardWare.h"
#include "Display.h"

struct Laptop
{
	string laptopName;
	string devCountry;
	unsigned int batteryPower;
	unsigned int weight;
	unsigned int safeGuard;
	Processor LaptopProcessor;
	RAM LaptopRAM;
	Videocard LaptopVideoCard;
	DiskDrive LaptopDiskDrive;
	Display LaptopDisplay;
	unsigned int price;
	unsigned int count;

	struct { unsigned int width; unsigned int height; unsigned int length; }Size;

	void CreateLaptop();
	void ShowLaptopInfo();

};




