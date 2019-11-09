#pragma once
#include "Display.h"


struct Monitor {
	string monitorName;
	string devCountry;
	string matrixType;
	string colour;
	int weight;
	int coloursCount;
	int safeGuard;
	unsigned int price;
	int count;
	Display monitorsDisplay;
	

	void CreateMonitor();
	void ShowMonitorInfo();
};

