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
	int price;
	Display monitorsDisplay;
	

	void CreateMonitor();
	void ShowMonitorInfo();
};

