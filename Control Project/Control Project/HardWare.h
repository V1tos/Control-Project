#pragma once
#include <iostream>
#include <string>

using namespace std;

struct Processor 
{ 
	string name; 
	double freq1; 
	double freq2; 
	int generation; 
};

struct RAM
{
	string type;
	int freq;
	int memory;
};

struct Videocard
{
	string name;
	int memory;
};

struct DiskDrive
{
	string type;
	int memory;
};


