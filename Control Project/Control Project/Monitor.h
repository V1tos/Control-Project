#pragma once
#include "Display.h"


struct Monitor {
	string monitorName;
	string devCountry;
	string matrixType;
	string colour;
	unsigned int weight;
	unsigned int coloursCount;
	unsigned int safeGuard;
	unsigned int price;
	unsigned int count;
	Display monitorsDisplay;
	

	void CreateMonitor();
	void ShowMonitorInfo();
};

