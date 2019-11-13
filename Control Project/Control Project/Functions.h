#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <stdlib.h>

using namespace std;


void ComputerList(PC *&computer, int &computersCount);

template <typename T>
void CopyData(T &data1, T &data2) {
	data2 = data1;
}



void Start() {
	int arr[100];

	for (int i = 0; i < 100; i++) {
		cout << "\t\t\t\t\t\t\t\t\t\tDownloading database: " << i + 1 << "%";
		system("cls");
		if (i == 99) {
			cout << "\t\t\t\t\t\t\t\t\t\tDatabase downloaded"<< endl;
			cout << "\t\t\t\t\t\t\t\t\t\t";
			system("pause");
			system("cls");
		}
	}
}






void AddComputer(PC *&computer, int &computersCount) {
	system("cls");
	int count = 0;
	cout << "\t\t\t\t\t\t\t\t\t\tHow many PC do you want to add?" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t";
	cin >> count;

	if (count > 0) {
		system("cls");
		PC *newComputer = new PC[computersCount + count];



		for (int i = 0; i < computersCount + count; i++) {
			if (i >= computersCount) {
				cout << "\t\t\t\t\t\t\t\t\t\tPC N" << i + 1 << " :" << endl;
				newComputer[i].CreateComputer();
				cout << "\t\t\t\t\t\t\t\t\t\tAdded" << endl;
				cout << "\t\t\t\t\t\t\t\t\t\t";
				system("pause");
				system("cls");
			}
			else
			{
				CopyData(computer[i], newComputer[i]);
			}

		};



		computersCount += count;



		delete[] computer;
		computer = newComputer;

	}
	else {
		cout << "\t\t\t\t\t\t\t\t\t\tWrong choice!" << endl;
		cout << "\t\t\t\t\t\t\t\t\t\t";
		system("pause");
	}

	
}

void ComputerList(PC *&computer, int &computersCount) {

	for (int i = 0; i < computersCount; i++)
	{
		cout << "\t\t\t\t\t\t\t\t\t\t*****************************************************************" << endl;
		cout << "\t\t\t\t\t\t\t\t\t\tPC N" << i + 1 << " :" << endl;
		computer[i].ShowComputerInfo();
		cout << "\t\t\t\t\t\t\t\t\t\t*****************************************************************" << endl;
	}

}

void DeleteComputer(PC *&computer, int &computersCount) {
	system("cls");

	if (computersCount == 1) {
		computersCount--;
		delete[] computer;
		computer = nullptr;
		cout << "\t\t\t\t\t\t\t\t\t\tDeleted" << endl;

	}
	else if (computersCount == 0) {
		cout << "\t\t\t\t\t\t\t\t\t\tThere aren't computers" << endl;
	}
	else
	{
		ComputerList(computer, computersCount);
		int number = 0;
		cout << "\t\t\t\t\t\t\t\t\t\tEnter PC N: ";
		cin >> number;

		if (number <= computersCount) {
			system("cls");
			PC *newComputer = new PC[computersCount - 1];


			for (int i = 0; i < computersCount; i++) {
				if (i >= number - 1 && i < computersCount - 1) {
					swap(computer[i], computer[i + 1]);
				}

			}

			for (int i = 0; i < computersCount - 1; i++) {
				CopyData(computer[i], newComputer[i]);
			}


			cout << "\t\t\t\t\t\t\t\t\t\tDeleted" << endl;

			computersCount--;


			delete[] computer;
			computer = newComputer;
			
		}
		else {
			cout << "\t\t\t\t\t\t\t\t\t\tWrong choice!" << endl;
		}

	}
	cout << "\t\t\t\t\t\t\t\t\t\t";
	system("pause");

}

void ChangeComputerPrice(PC *&computer, int &computersCount) {
	system("cls");
	unsigned int pcNumber = 0;
	ComputerList(computer, computersCount);
	cout << "\t\t\t\t\t\t\t\t\t\tEnter PC N: ";
	cin >> pcNumber;
	if (pcNumber <= computersCount) {
		system("cls");
		cout << "\t\t\t\t\t\t\t\t\t\tEnter new price: ";
		cin >> computer[pcNumber - 1].price;
		cout << "\t\t\t\t\t\t\t\t\t\tChanged price" << endl;

	}
	else {
		system("cls");
		cout << "\t\t\t\t\t\t\t\t\t\tWrong choice!" << endl;
	}
	cout << "\t\t\t\t\t\t\t\t\t\t";
	system("pause");

}

void SearchComputer(PC *&computer, int &computersCount) {
	system("cls");
	int tmp = 0;
	string searchName;

	cout << "\t\t\t\t\t\t\t\t\t\tEnter PC name: ";
	cin >> searchName;

	for (int i = 0; i < computersCount; i++)
	{
		if (computer[i].computerName == searchName) {
			computer[i].ShowComputerInfo();
			tmp++;
		}
	}

	if (tmp == 0) {
		cout << "\t\t\t\t\t\t\t\t\t\tDidn't find anything!" << endl;
	}
	cout << "\t\t\t\t\t\t\t\t\t\t";
	system("pause");

}

void PCWriteFile(PC *&computer, int &computersCount) {

	string path = "PC.txt";
	ofstream writeFile;
	writeFile.open(path);

	if (!writeFile.is_open()) {
		cout << "\t\t\t\t\t\t\t\t\t\tCan't open file!" << endl;
	}
	else
	{
		writeFile << computersCount << endl;
		for (int i = 0; i < computersCount; i++) {
			writeFile << computer[i].computerName << endl;
			writeFile << computer[i].devCountry << endl;
			writeFile << computer[i].PCProcessor.name << endl;
			writeFile << computer[i].PCProcessor.coreCount << endl;
			writeFile << computer[i].PCProcessor.freq1 << endl;
			writeFile << computer[i].PCProcessor.freq2 << endl;
			writeFile << computer[i].PCProcessor.generation << endl;
			writeFile << computer[i].PCRAM.type << endl;
			writeFile << computer[i].PCRAM.freq << endl;
			writeFile << computer[i].PCRAM.memory << endl;
			writeFile << computer[i].PCVideoCard.name << endl;
			writeFile << computer[i].PCVideoCard.memory << endl;
			writeFile << computer[i].PCDiskDrive.type << endl;
			writeFile << computer[i].PCDiskDrive.memory << endl;
			writeFile << computer[i].weight << endl;
			writeFile << computer[i].Size.width << endl;
			writeFile << computer[i].Size.height << endl;
			writeFile << computer[i].Size.length << endl;
			writeFile << computer[i].powerSupply << endl;
			writeFile << computer[i].safeGuard << endl;
			writeFile << computer[i].price << endl;
			writeFile << computer[i].count << endl;
		}

	}

	writeFile.close();
}

void PCReadFile(PC *&computer, int &computersCount) {
	
	int size = 0;
	char temp[255];
	string path = "PC.txt";
	ifstream readFile;

	

	readFile.open(path);
	if (!readFile.is_open()) {
		cout << "\t\t\t\t\t\t\t\t\t\tCan't open file!" << endl;
	}
	else {
		readFile.getline(temp, 255);
		size = atoi(temp);
		PC *newComputer = new PC[size];
		for (int i = 0; i < size; i++)
		{
			readFile.getline(temp, 255);
			newComputer[i].computerName = temp;
			readFile.getline(temp, 255);
			newComputer[i].devCountry = temp;
			readFile.getline(temp, 255);
			newComputer[i].PCProcessor.name = temp;
			readFile.getline(temp, 255);
			newComputer[i].PCProcessor.coreCount = atoi(temp);
			readFile.getline(temp, 255);
			newComputer[i].PCProcessor.freq1 = atof(temp);
			readFile.getline(temp, 255);
			newComputer[i].PCProcessor.freq2 = atof(temp);
			readFile.getline(temp, 255);
			newComputer[i].PCProcessor.generation = atoi(temp);
			readFile.getline(temp, 255);
			newComputer[i].PCRAM.type = temp;
			readFile.getline(temp, 255);
			newComputer[i].PCRAM.freq = atoi(temp);
			readFile.getline(temp, 255);
			newComputer[i].PCRAM.memory = atoi(temp);
			readFile.getline(temp, 255);
			newComputer[i].PCVideoCard.name = temp;
			readFile.getline(temp, 255);
			newComputer[i].PCVideoCard.memory = atoi(temp);
			readFile.getline(temp, 255);
			newComputer[i].PCDiskDrive.type = temp;
			readFile.getline(temp, 255);
			newComputer[i].PCDiskDrive.memory = atoi(temp);
			readFile.getline(temp, 255);
			newComputer[i].weight = atoi(temp);
			readFile.getline(temp, 255);
			newComputer[i].Size.width = atoi(temp);
			readFile.getline(temp, 255);
			newComputer[i].Size.height = atoi(temp);
			readFile.getline(temp, 255);
			newComputer[i].Size.length = atoi(temp);
			readFile.getline(temp, 255);
			newComputer[i].powerSupply = atoi(temp);
			readFile.getline(temp, 255);
			newComputer[i].safeGuard = atoi(temp);
			readFile.getline(temp, 255);
			newComputer[i].price = atoi(temp);
			readFile.getline(temp, 255);
			newComputer[i].count = atoi(temp);

		}

		computersCount += size;

		computer = newComputer;
	}
	readFile.close();

}






void MonitorList(Monitor *&monitor, int &monitorsCount) {

	
	for (int i = 0; i < monitorsCount; i++)
	{
		cout << "\t\t\t\t\t\t\t\t\t\t*****************************************************************" << endl;
		cout << "\t\t\t\t\t\t\t\t\t\tMonitor N" << i + 1 << " :" << endl;
		monitor[i].ShowMonitorInfo();
		cout << "\t\t\t\t\t\t\t\t\t\t*****************************************************************" << endl;
	}

}

void AddMonitor(Monitor *&monitor, int &monitorsCount) {
	system("cls");
	int count = 0;
	cout << "\t\t\t\t\t\t\t\t\t\tHow many monitors do you want to add?" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t";
	cin >> count;
	system("cls");
	if (count > 0) {
		Monitor *newMonitor = new Monitor[monitorsCount + count];

		for (int i = 0; i < monitorsCount + count; i++) {
			if (i >= monitorsCount) {
				cout << "\t\t\t\t\t\t\t\t\t\tMonitor N" << i + 1 << " :" << endl;
				newMonitor[i].CreateMonitor();
				cout << "\t\t\t\t\t\t\t\t\t\tAdded" << endl;
				cout << "\t\t\t\t\t\t\t\t\t\t";
				system("pause");
				system("cls");
			}
			else
			{
				CopyData(monitor[i], newMonitor[i]);
			}

		};

		monitorsCount += count;

		delete[] monitor;
		monitor = newMonitor;
	}
	else {
		cout << "\t\t\t\t\t\t\t\t\t\tWrong choice!" << endl;
		cout << "\t\t\t\t\t\t\t\t\t\t";
		system("pause");
	}
}

void DeleteMonitor(Monitor *&monitor, int &monitorsCount) {
	system("cls");

	if (monitorsCount == 1) {
		monitorsCount--;
		delete[] monitor;
		monitor = nullptr;
		cout << "\t\t\t\t\t\t\t\t\t\tDeleted" << endl;
	}
	else if (monitorsCount == 0) {
		cout << "\t\t\t\t\t\t\t\t\t\tThere aren't monitors" << endl;
	}
	else
	{
		MonitorList(monitor, monitorsCount);
		int number = 0;
		cout << "\t\t\t\t\t\t\t\t\t\tEnter Monitor N: ";
		cin >> number;
		if (number <= monitorsCount) {
			system("cls");
			Monitor *newMonitor = new Monitor[monitorsCount - 1];

			for (int i = 0; i < monitorsCount; i++) {
				if (i >= number - 1 && i < monitorsCount - 1) {
					swap(monitor[i], monitor[i + 1]);
				}

			}

			for (int i = 0; i < monitorsCount - 1; i++) {
				CopyData(monitor[i], newMonitor[i]);
			}


			cout << "\t\t\t\t\t\t\t\t\t\tDeleted" << endl;

			monitorsCount--;


			delete[] monitor;
			monitor = newMonitor;
			
		}
		else {
			cout << "\t\t\t\t\t\t\t\t\t\tWrong choice!" << endl;
		}

	}
	cout << "\t\t\t\t\t\t\t\t\t\t";
	system("pause");

}

void ChangeMonitorPrice(Monitor *&monitor, int &monitorsCount) {
	system("cls");
	unsigned int monitorNumber = 0;
	
	MonitorList(monitor, monitorsCount);
	cout << "\t\t\t\t\t\t\t\t\t\tEnter Monitor N: ";
	cin >> monitorNumber;
	if (monitorNumber <= monitorsCount) {
		system("cls");
		cout << "\t\t\t\t\t\t\t\t\t\tEnter new price: ";
		cin >> monitor[monitorNumber-1].price;
		cout << "\t\t\t\t\t\t\t\t\t\tChanged price" << endl;

	}
	else {
		cout << "\t\t\t\t\t\t\t\t\t\tWrong choice!" << endl;
	}
	cout << "\t\t\t\t\t\t\t\t\t\t";
	system("pause");

}

void SearchMonitor(Monitor *&monitor, int &monitorsCount) {
	system("cls");
	int tmp = 0;
	string searchName;

	cout << "\t\t\t\t\t\t\t\t\t\tEnter Monitor name: ";
	cin >> searchName;

	for (int i = 0; i < monitorsCount; i++)
	{
		if (monitor[i].monitorName == searchName) {
			tmp++;
			monitor[i].ShowMonitorInfo();
		}
	}

	if (tmp == 0) {
		cout << "\t\t\t\t\t\t\t\t\t\tDidn't find anything!" << endl;
	}
	cout << "\t\t\t\t\t\t\t\t\t\t";
	system("pause");

}

void MonitorWriteFile(Monitor *&monitor, int &monitorsCount) {

	string path = "Monitor.txt";
	ofstream writeFile;
	writeFile.open(path);

	if (!writeFile.is_open()) {
		cout << "\t\t\t\t\t\t\t\t\t\tCan't open file!" << endl;
	}
	else
	{
		writeFile << monitorsCount << endl;
		for (int i = 0; i < monitorsCount; i++) {
			writeFile << monitor[i].monitorName << endl;
			writeFile << monitor[i].devCountry << endl;
			writeFile << monitor[i].matrixType << endl;
			writeFile << monitor[i].colour << endl;
			writeFile << monitor[i].monitorsDisplay.diagonal << endl;
			writeFile << monitor[i].monitorsDisplay.refreshRate << endl;
			writeFile << monitor[i].coloursCount << endl;
			writeFile << monitor[i].weight << endl;
			writeFile << monitor[i].safeGuard << endl;
			writeFile << monitor[i].price << endl;
			writeFile << monitor[i].count << endl;
		}

	}

	

	writeFile.close();
}

void MonitorReadFile(Monitor *&monitor, int &monitorsCount) {

	int size = 0;
	char temp[255];
	string path = "Monitor.txt";
	ifstream readFile;


	readFile.open(path);
	if (!readFile.is_open()) {
		cout << "\t\t\t\t\t\t\t\t\t\tCan't open file!" << endl;
	}
	else {
		readFile.getline(temp, 255);
		size = atoi(temp);
		Monitor *newMonitor = new Monitor[size];
		for (int i = 0; i < size; i++)
		{
			readFile.getline(temp, 255);
			newMonitor[i].monitorName = temp;
			readFile.getline(temp, 255);
			newMonitor[i].devCountry = temp;
			readFile.getline(temp, 255);
			newMonitor[i].matrixType = temp;
			readFile.getline(temp, 255);
			newMonitor[i].colour = temp;
			readFile.getline(temp, 255);
			newMonitor[i].monitorsDisplay.diagonal = atof(temp);
			readFile.getline(temp, 255);
			newMonitor[i].monitorsDisplay.refreshRate = atoi(temp);
			readFile.getline(temp, 255);
			newMonitor[i].coloursCount = atoi(temp);
			readFile.getline(temp, 255);
			newMonitor[i].weight = atoi(temp);
			readFile.getline(temp, 255);
			newMonitor[i].safeGuard = atoi(temp);
			readFile.getline(temp, 255);
			newMonitor[i].price = atoi(temp);
			readFile.getline(temp, 255);
			newMonitor[i].count = atoi(temp);

		}

		monitorsCount += size;

		monitor = newMonitor;
	}
	readFile.close();

}





void LaptopList(Laptop *&laptop, int &laptopsCount) {
	for (int i = 0; i < laptopsCount; i++)
	{
		cout << "\t\t\t\t\t\t\t\t\t\t*****************************************************************" << endl;
		cout << "\t\t\t\t\t\t\t\t\t\tLaptop N" << i + 1 << " :" << endl;
		laptop[i].ShowLaptopInfo();
		cout << "\t\t\t\t\t\t\t\t\t\t*****************************************************************" << endl;
	}

}

void AddLaptop(Laptop *&laptop, int &laptopsCount) {
	system("cls");
	int count = 0;
	cout << "\t\t\t\t\t\t\t\t\t\tHow many laptops do you want to add?" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t";
	cin >> count;
	if (count > 0) {
		system("cls");
		Laptop *newLaptop = new Laptop[laptopsCount + count];

		for (int i = 0; i < laptopsCount + count; i++) {
			if (i >= laptopsCount) {
				cout << "\t\t\t\t\t\t\t\t\t\tLaptop N" << i + 1 << " :" << endl;
				newLaptop[i].CreateLaptop();
				cout << "\t\t\t\t\t\t\t\t\t\tAdded" << endl;
				cout << "\t\t\t\t\t\t\t\t\t\t";
				system("pause");
				system("cls");
			}
			else
			{
				CopyData(laptop[i], newLaptop[i]);
			}

		};

		laptopsCount += count;

		delete[] laptop;
		laptop = newLaptop;
	}
	else {
		cout << "\t\t\t\t\t\t\t\t\t\tWrong choice!" << endl;
		cout << "\t\t\t\t\t\t\t\t\t\t";
		system("pause");
	}
}

void DeleteLaptop(Laptop *&laptop, int &laptopsCount) {
	system("cls");

	if (laptopsCount == 1) {
		laptopsCount--;
		delete[] laptop;
		laptop = nullptr;
		cout << "\t\t\t\t\t\t\t\t\t\tDeleted" << endl;

	}
	else if (laptopsCount == 0) {
		cout << "\t\t\t\t\t\t\t\t\t\tThere aren't laptops" << endl;
	}
	else
	{
		LaptopList(laptop, laptopsCount);
		int number = 0;
		cout << "\t\t\t\t\t\t\t\t\t\tEnter Laptop N: ";
		cin >> number;

		if (number <= laptopsCount) {
			system("cls");
			Laptop *newLaptop = new Laptop[laptopsCount - 1];

			for (int i = 0; i < laptopsCount; i++) {
				if (i >= number - 1 && i < laptopsCount - 1) {
					swap(laptop[i], laptop[i + 1]);
				}

			}

			for (int i = 0; i < laptopsCount - 1; i++) {
				CopyData(laptop[i], newLaptop[i]);
			}


			cout << "\t\t\t\t\t\t\t\t\t\tDeleted" << endl;

			laptopsCount--;

			delete[] laptop;
			laptop = newLaptop;
			
		}
		else {
			cout << "\t\t\t\t\t\t\t\t\t\tWrong choice!" << endl;
		}

	}
	cout << "\t\t\t\t\t\t\t\t\t\t";
	system("pause");

}

void ChangeLaptopPrice(Laptop *&laptop, int &laptopsCount) {
	system("cls");
	unsigned int laptopNumber = 0;

	LaptopList(laptop, laptopsCount);
	
	cout << "\t\t\t\t\t\t\t\t\t\tEnter Laptop N:";
	cin >> laptopNumber;
	if (laptopNumber <= laptopsCount) {
		system("cls");
		cout << "\t\t\t\t\t\t\t\t\t\tEnter new price: ";
		cin >> laptop[laptopNumber - 1].price;
		cout << "\t\t\t\t\t\t\t\t\t\tChanged price" << endl;

	}
	else {
		cout << "\t\t\t\t\t\t\t\t\t\tWrong choice!" << endl;
	}
	cout << "\t\t\t\t\t\t\t\t\t\t";
	system("pause");

}

void SearchLaptop(Laptop *&laptop, int &laptopsCount) {
	system("cls");
	int tmp = 0;
	string searchName;

	cout << "\t\t\t\t\t\t\t\t\t\tEnter Laptop name: ";
	cin >> searchName;

	for (int i = 0; i < laptopsCount; i++)
	{
		if (laptop[i].laptopName == searchName) {
			laptop[i].ShowLaptopInfo();
			tmp++;
		}
	}
	if (tmp == 0) {
		cout << "\t\t\t\t\t\t\t\t\t\tDidn't find anything!" << endl;
	}
	cout << "\t\t\t\t\t\t\t\t\t\t";
	system("pause");
}

void LaptopWriteFile(Laptop *&laptop, int &laptopsCount) {

	string path = "Laptop.txt";
	ofstream writeFile;
	writeFile.open(path);

	if (!writeFile.is_open()) {
		cout << "\t\t\t\t\t\t\t\t\t\tCan't open file!" << endl;
	}
	else
	{
		writeFile << laptopsCount << endl;
		for (int i = 0; i < laptopsCount; i++) {
			writeFile << laptop[i].laptopName << endl;
			writeFile << laptop[i].devCountry << endl;
			writeFile << laptop[i].LaptopProcessor.name << endl;
			writeFile << laptop[i].LaptopProcessor.coreCount << endl;
			writeFile << laptop[i].LaptopProcessor.freq1 << endl;
			writeFile << laptop[i].LaptopProcessor.freq2 << endl;
			writeFile << laptop[i].LaptopProcessor.generation << endl;
			writeFile << laptop[i].LaptopRAM.type << endl;
			writeFile << laptop[i].LaptopRAM.freq << endl;
			writeFile << laptop[i].LaptopRAM.memory << endl;
			writeFile << laptop[i].LaptopVideoCard.name << endl;
			writeFile << laptop[i].LaptopVideoCard.memory << endl;
			writeFile << laptop[i].LaptopDiskDrive.type << endl;
			writeFile << laptop[i].LaptopDiskDrive.memory << endl;
			writeFile << laptop[i].LaptopDisplay.diagonal << endl;
			writeFile << laptop[i].LaptopDisplay.refreshRate << endl;
			writeFile << laptop[i].weight << endl;
			writeFile << laptop[i].Size.width << endl;
			writeFile << laptop[i].Size.height << endl;
			writeFile << laptop[i].Size.length << endl;
			writeFile << laptop[i].batteryPower << endl;
			writeFile << laptop[i].safeGuard << endl;
			writeFile << laptop[i].price << endl;
			writeFile << laptop[i].count << endl;
		}

	}

	writeFile.close();
}

void LaptopReadFile(Laptop *&laptop, int &laptopsCount) {

	int size = 0;
	char temp[255];
	string path = "Laptop.txt";
	ifstream readFile;

	readFile.open(path);
	if (!readFile.is_open()) {
		cout << "\t\t\t\t\t\t\t\t\t\tCan't open file!" << endl;
	}
	else {
		readFile.getline(temp, 255);
		size = atoi(temp);
		Laptop *newLaptop = new Laptop[size];
		for (int i = 0; i < size; i++)
		{
			readFile.getline(temp, 255);
			newLaptop[i].laptopName = temp;
			readFile.getline(temp, 255);
			newLaptop[i].devCountry = temp;
			readFile.getline(temp, 255);
			newLaptop[i].LaptopProcessor.name = temp;
			readFile.getline(temp, 255);
			newLaptop[i].LaptopProcessor.coreCount = atoi(temp);
			readFile.getline(temp, 255);
			newLaptop[i].LaptopProcessor.freq1 = atof(temp);
			readFile.getline(temp, 255);
			newLaptop[i].LaptopProcessor.freq2 = atof(temp);
			readFile.getline(temp, 255);
			newLaptop[i].LaptopProcessor.generation = atoi(temp);
			readFile.getline(temp, 255);
			newLaptop[i].LaptopRAM.type = temp;
			readFile.getline(temp, 255);
			newLaptop[i].LaptopRAM.freq = atoi(temp);
			readFile.getline(temp, 255);
			newLaptop[i].LaptopRAM.memory = atoi(temp);
			readFile.getline(temp, 255);
			newLaptop[i].LaptopVideoCard.name = temp;
			readFile.getline(temp, 255);
			newLaptop[i].LaptopVideoCard.memory = atoi(temp);
			readFile.getline(temp, 255);
			newLaptop[i].LaptopDiskDrive.type = temp;
			readFile.getline(temp, 255);
			newLaptop[i].LaptopDiskDrive.memory = atoi(temp);
			readFile.getline(temp, 255);
			newLaptop[i].LaptopDisplay.diagonal = atof(temp);
			readFile.getline(temp, 255);
			newLaptop[i].LaptopDisplay.refreshRate = atoi(temp);
			readFile.getline(temp, 255);
			newLaptop[i].weight = atoi(temp);
			readFile.getline(temp, 255);
			newLaptop[i].Size.width = atoi(temp);
			readFile.getline(temp, 255);
			newLaptop[i].Size.height = atoi(temp);
			readFile.getline(temp, 255);
			newLaptop[i].Size.length = atoi(temp);
			readFile.getline(temp, 255);
			newLaptop[i].batteryPower = atoi(temp);
			readFile.getline(temp, 255);
			newLaptop[i].safeGuard = atoi(temp);
			readFile.getline(temp, 255);
			newLaptop[i].price = atoi(temp);
			readFile.getline(temp, 255);
			newLaptop[i].count = atoi(temp);

		}

		laptopsCount += size;

		laptop = newLaptop;
	}
	readFile.close();

}






void MobileList(Mobile *&mobile, int &mobilesCount) {
	for (int i = 0; i < mobilesCount; i++)
	{
		cout << "\t\t\t\t\t\t\t\t\t\t*****************************************************************" << endl;
		cout << "\t\t\t\t\t\t\t\t\t\tMobile N" << i + 1 << " :" << endl;
		mobile[i].ShowMobileInfo();
		cout << "\t\t\t\t\t\t\t\t\t\t*****************************************************************" << endl;
	}

}

void AddMobile(Mobile *&mobile, int &mobilesCount) {
	system("cls");
	int count = 0;
	cout << "\t\t\t\t\t\t\t\t\t\tHow many mobilephones do you want to add?" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t";
	cin >> count;
	if (count > 0) {


		system("cls");
		Mobile *newMobile = new Mobile[mobilesCount + count];

		for (int i = 0; i < mobilesCount + count; i++) {
			if (i >= mobilesCount) {
				cout << "\t\t\t\t\t\t\t\t\t\tMobile N" << i + 1 << " :" << endl;
				newMobile[i].CreateMobile();
				cout << "\t\t\t\t\t\t\t\t\t\tAdded" << endl;
				system("pause");
				system("cls");
			}
			else
			{
				CopyData(mobile[i], newMobile[i]);
			}

		};

		mobilesCount += count;

		delete[] mobile;
		mobile = newMobile;
	}
	else {
		cout << "\t\t\t\t\t\t\t\t\t\tWrong choice!" << endl;
		cout << "\t\t\t\t\t\t\t\t\t\t";
		system("pause");
	}
	

}

void DeleteMobile(Mobile *&mobile, int &mobilesCount) {
	system("cls");

	if (mobilesCount == 1) {

		mobilesCount--;
		delete[] mobile;
		mobile = nullptr;
		cout << "\t\t\t\t\t\t\t\t\t\tDeleted" << endl;
		

	}
	else if (mobilesCount == 0) {
		cout << "\t\t\t\t\t\t\t\t\t\tThere aren't Mobiletelephones" << endl;
		
	}
	else
	{
		MobileList(mobile, mobilesCount);
		int number = 0;
		cout << "\t\t\t\t\t\t\t\t\t\tEnter Mobile N: ";
		cin >> number;
		if (number <= mobilesCount) {
			system("cls");
			Mobile *newMobile = new Mobile[mobilesCount - 1];

			for (int i = 0; i < mobilesCount; i++) {
				if (i >= number - 1 && i < mobilesCount - 1) {
					swap(mobile[i], mobile[i + 1]);
				}

			}

			for (int i = 0; i < mobilesCount - 1; i++) {
				CopyData(mobile[i], newMobile[i]);
			}


			cout << "\t\t\t\t\t\t\t\t\t\tDeleted" << endl;

			mobilesCount--;


			delete[] mobile;
			mobile = newMobile;
			

		}
		else {
			cout << "\t\t\t\t\t\t\t\t\t\tWrong choice!" << endl;
		}


	}
	cout << "\t\t\t\t\t\t\t\t\t\t";
	system("pause");

}

void ChangeMobilePrice(Mobile *&mobile, int &mobilesCount) {
	system("cls");
	unsigned int mobileNumber = 0;
	
	MobileList(mobile, mobilesCount);

	cout << "\t\t\t\t\t\t\t\t\t\tEnter Mobile N: ";
	cin >> mobileNumber;
	if (mobileNumber <= mobilesCount) {
		system("cls");
		cout << "\t\t\t\t\t\t\t\t\t\tEnter new price: ";
		cin >> mobile[mobileNumber - 1].price;
		cout << "\t\t\t\t\t\t\t\t\t\tChanged price" << endl;

	}
	else {
		cout << "\t\t\t\t\t\t\t\t\t\tWrong choice!" << endl;
	}
	cout << "\t\t\t\t\t\t\t\t\t\t";
	system("pause");

}

void SearchMobile(Mobile *&mobile, int &mobilesCount) {
	system("cls");

	int tmp = 0;
	string searchName;

	cout << "\t\t\t\t\t\t\t\t\t\tEnter Mobile name: ";
	cin >> searchName;

	for (int i = 0; i < mobilesCount; i++)
	{
		if (mobile[i].mobileName == searchName) {
			mobile[i].ShowMobileInfo();
			tmp++;
		}
	}

	if (tmp == 0) {
		cout << "\t\t\t\t\t\t\t\t\t\tDidn't find anything!" << endl;
	}
	cout << "\t\t\t\t\t\t\t\t\t\t";
	system("pause");

}

void MobileWriteFile(Mobile *&mobile, int &mobilesCount) {

	string path = "Mobile.txt";
	ofstream writeFile;
	writeFile.open(path);

	if (!writeFile.is_open()) {
		cout << "\t\t\t\t\t\t\t\t\t\tCan't open file!" << endl;
	}
	else
	{
		writeFile << mobilesCount << endl;
		for (int i = 0; i < mobilesCount; i++) {
			writeFile << mobile[i].mobileName << endl;
			writeFile << mobile[i].devCountry << endl;
			writeFile << mobile[i].displayDiagonal << endl;
			writeFile << mobile[i].mainCamera << endl;
			writeFile << mobile[i].frontCamera << endl;
			writeFile << mobile[i].RAMmemory << endl;
			writeFile << mobile[i].memory << endl;
			writeFile << mobile[i].batteryCapacity << endl;
			writeFile << mobile[i].weight << endl;
			writeFile << mobile[i].safeGuard << endl;
			writeFile << mobile[i].price << endl;
			writeFile << mobile[i].count << endl;
		}

	}

	writeFile.close();
}

void MobileReadFile(Mobile *&mobile, int &mobilesCount) {

	int size = 0;
	char temp[255];
	string path = "Mobile.txt";
	ifstream readFile;


	readFile.open(path);
	if (!readFile.is_open()) {
		cout << "\t\t\t\t\t\t\t\t\t\tCan't open file!" << endl;
	}
	else {
		readFile.getline(temp, 255);
		size = atoi(temp);
		Mobile *newMobile = new Mobile[size];
		for (int i = 0; i < size; i++)
		{
			readFile.getline(temp, 255);
			newMobile[i].mobileName = temp;
			readFile.getline(temp, 255);
			newMobile[i].devCountry = temp;
			readFile.getline(temp, 255);
			newMobile[i].displayDiagonal = atof(temp);
			readFile.getline(temp, 255);
			newMobile[i].mainCamera = atoi(temp);
			readFile.getline(temp, 255);
			newMobile[i].frontCamera = atoi(temp);
			readFile.getline(temp, 255);
			newMobile[i].RAMmemory = atoi(temp);
			readFile.getline(temp, 255);
			newMobile[i].memory = atoi(temp);
			readFile.getline(temp, 255);
			newMobile[i].batteryCapacity = atoi(temp);
			readFile.getline(temp, 255);
			newMobile[i].weight = atoi(temp);
			readFile.getline(temp, 255);
			newMobile[i].safeGuard = atoi(temp);
			readFile.getline(temp, 255);
			newMobile[i].price = atoi(temp);
			readFile.getline(temp, 255);
			newMobile[i].count = atoi(temp);

		}

		mobilesCount += size;

		mobile = newMobile;
	}
	readFile.close();

}




void ShowAllList(PC *&computer, int &computersCount,Laptop *&laptop, int &laptopsCount, Monitor *&monitor, int &monitorsCount, Mobile *&mobile, int &mobilesCount) {
	system("cls");
	
		ComputerList(computer, computersCount);
		MonitorList(monitor, monitorsCount);
		LaptopList(laptop, laptopsCount);
		MobileList(mobile, mobilesCount);
	
}

void SortByPrice(PC *&computer, int &computersCount, Laptop *&laptop, int &laptopsCount, Monitor *&monitor, int &monitorsCount, Mobile *&mobile, int &mobilesCount) {
	system("cls");
	int size = 0;
	size = computersCount + laptopsCount + monitorsCount + mobilesCount;
	int *arr = new int[size];
	int laptopIterator = 0, monitorIterator = 0, mobileIterator = 0;
	for (int i = 0; i<size; i++)
	{
		if (i < computersCount) {
			arr[i] = computer[i].price;
		}
		else if (i >= computersCount && i < computersCount + laptopsCount) {
			arr[i] = laptop[laptopIterator].price;
			laptopIterator++;
		}
		else if (i >= computersCount + laptopsCount && i < computersCount + laptopsCount + monitorsCount) {
			arr[i] = monitor[monitorIterator].price;
			monitorIterator++;
		}
		else if (i>= computersCount + laptopsCount + monitorsCount){
			arr[i] = mobile[mobileIterator].price;
			mobileIterator++;
		}
		
	}


	for (int i = 0; i < size; i++) {

		for (int j = 0; j < size; j++) {
			if (arr[j] < arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}

	for (int i = 0; i < size; i++)
	{
		
		if (arr[i] != arr[i + 1]) {
			cout << "\t\t\t\t\t\t\t\t\t\tPrice - " << arr[i] << " UAH:" << endl;

			for (int j = 0; j < computersCount; j++) {
				if (arr[i] == computer[j].price) {
					cout << "\t\t\t\t\t\t\t\t\t\tPC:" << endl;
					computer[j].ShowComputerInfo();
					cout << "\n\n";
				}
			}

			for (int j = 0; j < laptopsCount; j++) {
				if (arr[i] == laptop[j].price) {
					cout << "\t\t\t\t\t\t\t\t\t\tLaptop:" << endl;
					laptop[j].ShowLaptopInfo();
					cout << "\n\n";
				}
			}

			for (int j = 0; j < monitorsCount; j++) {
				if (arr[i] == monitor[j].price) {
					cout << "\t\t\t\t\t\t\t\t\t\tMonitor:" << endl;
					monitor[j].ShowMonitorInfo();
					cout << "\n\n";
				}
			}

			for (int j = 0; j < mobilesCount; j++) {
				if (arr[i] == mobile[j].price) {
					cout << "\t\t\t\t\t\t\t\t\t\tMobile:" << endl;
					mobile[j].ShowMobileInfo();
					cout << "\n\n";
				}
			}


		}
	}
	cout << "\t\t\t\t\t\t\t\t\t\t";
	system("pause");
}

void FilterByPrice(PC *&computer, int &computersCount, Laptop *&laptop, int &laptopsCount, Monitor *&monitor, int &monitorsCount, Mobile *&mobile, int &mobilesCount){
	system("cls");
	int limitPrice = 0, tmp = 0;


	cout << "\t\t\t\t\t\t\t\t\t\tEnter limited price: ";
	cin >> limitPrice;
	system("cls");
	cout << "\t\t\t\t\t\t\t\t\t\tLimited price - " << limitPrice << " UAH :" << endl;
	for (int i = 0; i < computersCount; i++) {

		if (computer[i].price <= limitPrice) {
			cout << "\t\t\t\t\t\t\t\t\t\tPC:" << endl;
			computer[i].ShowComputerInfo();
			cout << "\n\n";
			tmp++;
		}

	}

	for (int i = 0; i < monitorsCount; i++) {

		if (monitor[i].price <= limitPrice) {
			cout << "\t\t\t\t\t\t\t\t\t\tMonitor:" << endl;
			monitor[i].ShowMonitorInfo();
			cout << "\n\n";
			tmp++;
		}

	}

	for (int i = 0; i < laptopsCount; i++) {

		if (laptop[i].price <= limitPrice) {
			cout << "\t\t\t\t\t\t\t\t\t\tLaptop:" << endl;
			laptop[i].ShowLaptopInfo();
			cout << "\n\n";
			tmp++;
		}

	}


	for (int i = 0; i < mobilesCount; i++) {

		if (mobile[i].price <= limitPrice) {
			cout << "\t\t\t\t\t\t\t\t\t\tMobilephone:" << endl;
			mobile[i].ShowMobileInfo();
			cout << "\n\n";
			tmp++;
		}

	}

	if (tmp == 0) {
		cout << "\t\t\t\t\t\t\t\t\t\tDidn't find anything!" << endl;
	}
	cout << "\t\t\t\t\t\t\t\t\t\t";
	system("pause");
}

void FilterByCount(PC *&computer, int &computersCount, Laptop *&laptop, int &laptopsCount, Monitor *&monitor, int &monitorsCount, Mobile *&mobile, int &mobilesCount) {
	system("cls");
	int limitCount = 0, tmp = 0;
	
	cout << "\t\t\t\t\t\t\t\t\t\tEnter limited count: ";
	cin >> limitCount;
	system("cls");
	cout << "\t\t\t\t\t\t\t\t\t\tLimited count - " << limitCount << " :" << endl;

	for (int i = 0; i < computersCount; i++) {

		if (computer[i].count <= limitCount) {
			cout << "\t\t\t\t\t\t\t\t\t\tPC:" << endl;
			computer[i].ShowComputerInfo();
			cout << "\n\n";
			tmp++;
		}

	}

	for (int i = 0; i < monitorsCount; i++) {

		if (monitor[i].count <= limitCount) {
			cout << "\t\t\t\t\t\t\t\t\t\tMonitor:" << endl;
			monitor[i].ShowMonitorInfo();
			cout << "\n\n";
			tmp++;
		}

	}

	for (int i = 0; i < laptopsCount; i++) {

		if (laptop[i].count <= limitCount) {
			cout << "\t\t\t\t\t\t\t\t\t\tLaptop:" << endl;
			laptop[i].ShowLaptopInfo();
			cout << "\n\n";
			tmp++;
		}

	}

	
	for (int i = 0; i < mobilesCount; i++) {

		if (mobile[i].count <= limitCount) {
			cout << "\t\t\t\t\t\t\t\t\t\tMobilephone:" << endl;
			mobile[i].ShowMobileInfo();
			cout << "\n\n";
			tmp++;
		}

	}

	if (tmp == 0) {
		cout << "\t\t\t\t\t\t\t\t\t\tDidn't find anything!" << endl;
	}
	cout << "\t\t\t\t\t\t\t\t\t\t";
	system("pause");
}







