#pragma once
#include "Laptop.h"
#include "PC.h"
#include "Monitor.h"
#include "MobilePhone.h"
#include "Functions.h"


struct Department
{
	int laptopsCount = 0;
	Laptop *laptop = new Laptop[laptopsCount];

	int pcCount = 0;
	PC *pc = new PC[pcCount];

	int monitorsCount = 0;
	Monitor *monitor = new Monitor[monitorsCount];

	int mobilesCount = 0;
	Mobile *mobile = new Mobile[mobilesCount];

};
