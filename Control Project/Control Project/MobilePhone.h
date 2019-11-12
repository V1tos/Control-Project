#pragma once
#include <iostream>
#include <string>

using namespace std;


struct Mobile
{
	string mobileName;
	string devCountry;
	string OS;
	string colour;
	unsigned int mainCamera;
	unsigned int frontCamera;
	unsigned int batteryCapacity;
	unsigned int weight;
	unsigned int safeGuard;
	long double displayDiagonal;
	unsigned int RAMmemory;
	unsigned int memory;
	unsigned int price;
	unsigned int count;


	void CreateMobile();
	void ShowMobileInfo();
};


