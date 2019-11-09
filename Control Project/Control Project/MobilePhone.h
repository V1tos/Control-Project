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
	int mainCamera;
	int frontCamera;
	int batteryCapacity;
	int weight;
	int safeGuard;
	double displayDiagonal;
	int RAMmemory;
	int memory;
	int price;
	unsigned int count;


	void CreateMobile();
	void ShowMobileInfo();
};


