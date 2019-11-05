#pragma once
#include "HardWare.h"
#include "Display.h"

struct Laptop
{
	string laptopName;
	string devCountry;
	int batteryPower;
	int weight;
	int safeGuard;
	Processor LaptopProcessor;
	RAM LaptopRAM;
	Videocard LaptopVideoCard;
	DiskDrive LaptopDiskDrive;
	Display LaptopDisplay;
	int price;

	struct { int width; int height; int length; }Size;

	void CreateLaptop();
	void ShowLaptopInfo();

};




