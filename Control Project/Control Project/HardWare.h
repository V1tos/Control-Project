#pragma once
#include <iostream>
#include <string>

using namespace std;

struct Processor 
{ 
	string name; 
	unsigned int coreCount;
	long double freq1; 
	long double freq2; 
	unsigned int generation;
};

struct RAM
{
	string type;
	unsigned int freq;
	unsigned int memory;
};

struct Videocard
{
	string name;
	unsigned int memory;
};

struct DiskDrive
{
	string type;
	unsigned int memory;
};


