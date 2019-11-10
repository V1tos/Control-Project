#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;



template <typename T>
void CopyData(T &data1, T &data2) {
	data2 = data1;
}



void Start() {
	int arr[100];

	for (int i = 0; i < 100; i++) {
		cout << "Downloading database: " << i + 1 << "%";
		system("cls");
		if (i == 99) {
			cout << "Database downloaded"<< endl;
			system("pause");
			system("cls");
		}
	}
}

void AddComputer(PC *&computer, int &computersCount) {
	system("cls");
	int count = 0;
	cout << "How many PC do you want to add?" << endl;
	cin >> count;
	system("cls");
	PC *newComputer = new PC[computersCount + count];



	for (int i = 0; i < computersCount + count; i++) {
		if (i >= computersCount) {
			cout << "PC N" << i + 1 << " :" << endl;
			newComputer[i].CreateComputer();
			system("cls");
			cout << "Added" << endl;
		}
		else
		{
			CopyData(computer[i], newComputer[i]);
		}

	};



	computersCount += count;



	delete[] computer;
	computer = newComputer;

	string path = "PC.txt";
	ofstream fout;
	fout.open(path);

	if (!fout.is_open()) {
		cout << "No file" << endl;
	}
	else
	{

		fout << computersCount << endl;
		for (int i = 0; i < computersCount; i++) {
			fout << computer[i].computerName << endl;
			fout << computer[i].devCountry << endl;
			fout << computer[i].PCProcessor.name << endl;
			fout << computer[i].PCProcessor.coreCount << endl;
			fout << computer[i].PCProcessor.freq1 << endl;
			fout << computer[i].PCProcessor.freq2 << endl;
			fout << computer[i].PCProcessor.generation << endl;
			fout << computer[i].PCRAM.type << endl;
			fout << computer[i].PCRAM.freq << endl;
			fout << computer[i].PCRAM.memory << endl;
			fout << computer[i].PCVideoCard.name << endl;
			fout << computer[i].PCVideoCard.memory << endl;
			fout << computer[i].PCDiskDrive.type << endl;
			fout << computer[i].PCDiskDrive.memory << endl;
			fout << computer[i].weight << endl;
			fout << computer[i].Size.width << endl;
			fout << computer[i].Size.height << endl;
			fout << computer[i].Size.length << endl;
			fout << computer[i].powerSupply << endl;
			fout << computer[i].safeGuard << endl;
			fout << computer[i].price << endl;
			fout << computer[i].count << endl;
		}
		
	}

	fout.close();

	system("pause");
}

void DeleteComputer(PC *&computer, int &computersCount) {
	system("cls");

	if (computersCount == 1) {
		PC *newComputer = new PC[computersCount - 1];
		computersCount--;
		delete[] computer;
		computer = newComputer;
		cout << "Deleted" << endl;
		system("pause");

	}
	else if (computersCount == 0) {
		cout << "There aren't computers" << endl;
		system("pause");
	}
	else
	{
		PC *newComputer = new PC[computersCount - 1];
		int number = 0;
		cout << "Enter number of computer (1 - " << computersCount << ")" << endl;
		cin >> number;
		system("cls");


		for (int i = 0; i < computersCount; i++) {
			if (i >= number - 1 && i < computersCount - 1) {
				swap(computer[i], computer[i + 1]);
			}

		}

		for (int i = 0; i < computersCount - 1; i++) {
			CopyData(computer[i], newComputer[i]);
		}


		cout << "Deleted" << endl;

		computersCount--;


		delete[] computer;
		computer = newComputer;
		system("pause");


	}



}

void ComputerList(PC *&computer, int &computersCount) {
	system("cls");
	for (int i = 0; i < computersCount; i++)
	{
		cout << "*************************************************************" << endl;
		cout << "PC N" << i + 1 << " :" << endl;
		computer[i].ShowComputerInfo();
		cout << "*************************************************************" << endl;
	}
	system("pause");

}

void ChangeComputerPrice(PC *&computer, int &computersCount) {
	system("cls");
	unsigned int pcNumber = 0;
	for (int i = 0; i < computersCount; i++)
	{
		cout << "*************************************************************" << endl;
		cout << "PC N" << i + 1 << " :" << endl;
		computer[i].ShowComputerInfo();
		cout << "*************************************************************" << endl;
	}
	cout << "Enter PC number: ";
	cin >> pcNumber;
	system("cls");
	cout << "Enter new price: ";
	cin >> computer[pcNumber - 1].price;
	cout << "Changed price" << endl;
	system("pause");

}

void SearchComputer(PC *&computer, int &computersCount) {
	system("cls");

	string searchName;

	cout << "Enter PC name: ";
	cin >> searchName;

	for (int i = 0; i < computersCount; i++)
	{
		if (computer[i].computerName == searchName) {
			computer[i].ShowComputerInfo();
		}
	}

	system("pause");

}





void AddMonitor(Monitor *&monitor, int &monitorsCount) {
	system("cls");
	int count = 0;
	cout << "How many monitors do you want to add?" << endl;
	cin >> count;
	system("cls");
	Monitor *newMonitor = new Monitor[monitorsCount + count];

	for (int i = 0; i < monitorsCount + count; i++) {
		if (i >= monitorsCount) {
			cout << "Monitor N" << i + 1 << " :" << endl;
			newMonitor[i].CreateMonitor();
			system("cls");
			cout << "Added" << endl;
		}
		else
		{
			CopyData(monitor[i], newMonitor[i]);
		}

	};

	monitorsCount += count;

	delete[] monitor;
	monitor = newMonitor;
	system("pause");
}

void DeleteMonitor(Monitor *&monitor, int &monitorsCount) {
	system("cls");

	if (monitorsCount == 1) {
		Monitor *newMonitor = new Monitor[monitorsCount - 1];
		monitorsCount--;
		delete[] monitor;
		monitor = newMonitor;
		cout << "Deleted" << endl;
		system("pause");

	}
	else if (monitorsCount == 0) {
		cout << "There aren't monitors" << endl;
		system("pause");
	}
	else
	{
		Monitor *newMonitor = new Monitor[monitorsCount - 1];
		int number = 0;
		cout << "Enter number of monitor (1 - " << monitorsCount << ")" << endl;
		cin >> number;
		system("cls");


		for (int i = 0; i < monitorsCount; i++) {
			if (i >= number - 1 && i < monitorsCount - 1) {
				swap(monitor[i], monitor[i + 1]);
			}

		}

		for (int i = 0; i < monitorsCount - 1; i++) {
			CopyData(monitor[i], newMonitor[i]);
		}


		cout << "Deleted" << endl;

		monitorsCount--;


		delete[] monitor;
		monitor = newMonitor;
		system("pause");


	}



}

void MonitorList(Monitor *&monitor, int &monitorsCount) {
	system("cls");
	for (int i = 0; i < monitorsCount; i++)
	{
		cout << "*************************************************************" << endl;
		cout << "Monitor N" << i + 1 << " :" << endl;
		monitor[i].ShowMonitorInfo();
		cout << "*************************************************************" << endl;
	}
	system("pause");
}

void ChangeMonitorPrice(Monitor *&monitor, int &monitorsCount) {
	system("cls");
	unsigned int monitorNumber = 0;
	for (int i = 0; i < monitorsCount; i++)
	{
		cout << "*************************************************************" << endl;
		cout << "Monitor N" << i + 1 << " :" << endl;
		monitor[i].ShowMonitorInfo();
		cout << "*************************************************************" << endl;
	}
	cout << "Enter Monitor number: ";
	cin >> monitorNumber;
	system("cls");
	cout << "Enter new price: ";
	cin >> monitor[monitorNumber - 1].price;
	cout << "Changed price" << endl;
	system("pause");

}

void SearchMonitor(Monitor *&monitor, int &monitorsCount) {
	system("cls");

	string searchName;

	cout << "Enter Monitor name: ";
	cin >> searchName;

	for (int i = 0; i < monitorsCount; i++)
	{
		if (monitor[i].monitorName == searchName) {
			monitor[i].ShowMonitorInfo();
		}
	}

	system("pause");

}



void AddLaptop(Laptop *&laptop, int &laptopsCount) {
	system("cls");
	int count = 0;
	cout << "How many laptops do you want to add?" << endl;
	cin >> count;
	system("cls");
	Laptop *newLaptop = new Laptop[laptopsCount + count];

	for (int i = 0; i < laptopsCount + count; i++) {
		if (i >= laptopsCount) {
			cout << "Laptop N" << i + 1 << " :" << endl;
			newLaptop[i].CreateLaptop();
			system("cls");
			cout << "Added" << endl;
		}
		else
		{
			CopyData(laptop[i], newLaptop[i]);
		}

	};

	laptopsCount += count;

	delete[] laptop;
	laptop = newLaptop;
	system("pause");
}

void DeleteLaptop(Laptop *&laptop, int &laptopsCount) {
	system("cls");

	if (laptopsCount == 1) {
		Laptop *newLaptop = new Laptop[laptopsCount - 1];
		laptopsCount--;
		delete[] laptop;
		laptop = newLaptop;
		cout << "Deleted" << endl;
		system("pause");

	}
	else if (laptopsCount == 0) {
		cout << "There aren't laptops" << endl;
		system("pause");
	}
	else
	{
		Laptop *newLaptop = new Laptop[laptopsCount - 1];
		int number = 0;
		cout << "Enter number of laptop (1 - " << laptopsCount << ")" << endl;
		cin >> number;
		system("cls");


		for (int i = 0; i < laptopsCount; i++) {
			if (i >= number - 1 && i < laptopsCount - 1) {
				swap(laptop[i], laptop[i + 1]);
			}

		}

		for (int i = 0; i < laptopsCount - 1; i++) {
			CopyData(laptop[i], newLaptop[i]);
		}


		cout << "Deleted" << endl;

		laptopsCount--;


		delete[] laptop;
		laptop = newLaptop;
		system("pause");


	}



}

void LaptopList(Laptop *&laptop, int &laptopsCount) {
	system("cls");
	for (int i = 0; i < laptopsCount; i++)
	{
		cout << "*************************************************************" << endl;
		cout << "Laptop N" << i + 1 << " :" << endl;
		laptop[i].ShowLaptopInfo();
		cout << "*************************************************************" << endl;
	}
	system("pause");
}

void ChangeLaptopPrice(Laptop *&laptop, int &laptopsCount) {
	system("cls");
	unsigned int laptopNumber = 0;

	for (int i = 0; i < laptopsCount; i++)
	{
		cout << "*************************************************************" << endl;
		cout << "Laptop N" << i + 1 << " :" << endl;
		laptop[i].ShowLaptopInfo();
		cout << "*************************************************************" << endl;
	}
	
	cout << "Enter Laptop number: ";
	cin >> laptopNumber;
	system("cls");
	cout << "Enter new price: ";
	cin >> laptop[laptopNumber - 1].price;
	cout << "Changed price" << endl;
	system("pause");

}

void SearchLaptop(Laptop *&laptop, int &laptopsCount) {
	system("cls");

	string searchName;

	cout << "Enter Laptop name: ";
	cin >> searchName;

	for (int i = 0; i < laptopsCount; i++)
	{
		if (laptop[i].laptopName == searchName) {
			laptop[i].ShowLaptopInfo();
		}
	}

	system("pause");
}






void AddMobile(Mobile *&mobile, int &mobilesCount) {
	system("cls");
	int count = 0;
	cout << "How many mobilephones do you want to add?" << endl;
	cin >> count;
	system("cls");
	Mobile *newMobile = new Mobile[mobilesCount + count];

	for (int i = 0; i < mobilesCount + count; i++) {
		if (i >= mobilesCount) {
			cout << "Mobile N" << i + 1 << " :" << endl;
			newMobile[i].CreateMobile();
			system("cls");
			cout << "Added" << endl;
		}
		else
		{
			CopyData(mobile[i], newMobile[i]);
		}

	};

	mobilesCount += count;

	delete[] mobile;
	mobile = newMobile;
	system("pause");

}

void DeleteMobile(Mobile *&mobile, int &mobilesCount) {
	system("cls");

	if (mobilesCount == 1) {
		Mobile *newMobile = new Mobile[mobilesCount - 1];
		mobilesCount--;
		delete[] mobile;
		mobile = newMobile;
		cout << "Deleted" << endl;
		system("pause");

	}
	else if (mobilesCount == 0) {
		cout << "There aren't Mobiletelephones" << endl;
		system("pause");
	}
	else
	{
		Mobile *newMobile = new Mobile[mobilesCount - 1];
		int number = 0;
		cout << "Enter number of Mobiletelephone (1 - " << mobilesCount << ")" << endl;
		cin >> number;
		system("cls");


		for (int i = 0; i < mobilesCount; i++) {
			if (i >= number - 1 && i < mobilesCount - 1) {
				swap(mobile[i], mobile[i + 1]);
			}

		}

		for (int i = 0; i < mobilesCount - 1; i++) {
			CopyData(mobile[i], newMobile[i]);
		}


		cout << "Deleted" << endl;

		mobilesCount--;


		delete[] mobile;
		mobile = newMobile;
		system("pause");


	}



}

void MobileList(Mobile *&mobile, int &mobilesCount) {
	system("cls");
	for (int i = 0; i < mobilesCount; i++)
	{
		cout << "*************************************************************" << endl;
		cout << "Mobile N" << i + 1 << " :" << endl;
		mobile[i].ShowMobileInfo();
		cout << "*************************************************************" << endl;
	}
	system("pause");
}

void ChangeMobilePrice(Mobile *&mobile, int &mobilesCount) {
	system("cls");
	unsigned int mobileNumber = 0;
	for (int i = 0; i < mobilesCount; i++)
	{
		cout << "*************************************************************" << endl;
		cout << "Mobile N" << i + 1 << " :" << endl;
		mobile[i].ShowMobileInfo();
		cout << "*************************************************************" << endl;
	}
	cout << "Enter Mobile number: ";
	cin >> mobileNumber;
	system("cls");
	cout << "Enter new price: ";
	cin >> mobile[mobileNumber - 1].price;
	cout << "Changed price" << endl;
	system("pause");

}

void SearchMobile(Mobile *&mobile, int &mobilesCount) {
	system("cls");

	string searchName;

	cout << "Enter Laptop name: ";
	cin >> searchName;

	for (int i = 0; i < mobilesCount; i++)
	{
		if (mobile[i].mobileName == searchName) {
			mobile[i].ShowMobileInfo();
		}
	}
	system("pause");

}





void ShowAllList(PC *&computer, int &computersCount,Laptop *&laptop, int &laptopsCount, Monitor *&monitor, int &monitorsCount, Mobile *&mobile, int &mobilesCount) {
	system("cls");
	for (int i = 0; i < computersCount; i++)
	{
		cout << "*************************************************************" << endl;
		cout << "PC N" << i + 1 << " :" << endl;
		computer[i].ShowComputerInfo();
		cout << "*************************************************************" << endl;
	}
	for (int i = 0; i < laptopsCount; i++)
	{
		cout << "*************************************************************" << endl;
		cout << "Laptop N" << i + 1 << " :" << endl;
		laptop[i].ShowLaptopInfo();
		cout << "*************************************************************" << endl;
	}
	for (int i = 0; i < monitorsCount; i++)
	{
		cout << "*************************************************************" << endl;
		cout << "Monitor N" << i + 1 << " :" << endl;
		monitor[i].ShowMonitorInfo();
		cout << "*************************************************************" << endl;
	}

	for (int i = 0; i < mobilesCount; i++)
	{
		cout << "*************************************************************" << endl;
		cout << "Mobile N" << i + 1 << " :" << endl;
		mobile[i].ShowMobileInfo();
		cout << "*************************************************************" << endl;
	}
	

	system("pause");
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
		}
		else {
			arr[i] = mobile[mobileIterator].price;
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
		cout << "Price - " << arr[i] << " UAH :" << endl;
		for (int j = 0; j < size; j++) {
			if (arr[i] == computer[j].price) {
				cout << "PC:" << endl;
				computer[j].ShowComputerInfo();
			}
			if (arr[i] == laptop[j].price) {
				cout << "Laptop:" << endl;
				laptop[j].ShowLaptopInfo();
			}
			if (arr[i] == monitor[j].price) {
				cout << "Monitor:" << endl;
				monitor[j].ShowMonitorInfo();
			}
			if (arr[i] == mobile[j].price) {
				cout << "Mobilephone:" << endl;
				mobile[j].ShowMobileInfo();
			}
		}
	}

	system("pause");
}

void FilterByPrice(PC *&computer, int &computersCount, Laptop *&laptop, int &laptopsCount, Monitor *&monitor, int &monitorsCount, Mobile *&mobile, int &mobilesCount){
	system("cls");
	int limitPrice = 0;
	int size = 0;
	size = computersCount + laptopsCount + monitorsCount + mobilesCount;
	int *arr = new int[size];
	int laptopIterator = 0, monitorIterator = 0, mobileIterator = 0;
	for (int i = 0; i < size; i++)
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
		}
		else {
			arr[i] = mobile[mobileIterator].price;
		}

	}
	cout << "Enter limited price: ";
	cin >> limitPrice;
	system("cls");
	cout << "Limited price - " << limitPrice << " UAH :" << endl;
	for (int i = 0; i < size; i++) {
		
		for (int j = 0; j < size; j++) {
			if (arr[i] == computer[j].price&&arr[i] <= limitPrice) {
				cout << "PC:" << endl;
				computer[j].ShowComputerInfo();
			}
			if (arr[i] == laptop[j].price&&arr[i] <= limitPrice) {
				cout << "Laptop:" << endl;
				laptop[j].ShowLaptopInfo();
			}
			if (arr[i] == monitor[j].price&&arr[i] <= limitPrice) {
				cout << "Monitor:" << endl;
				monitor[j].ShowMonitorInfo();
			}
			if (arr[i] == mobile[j].price&&arr[i] <= limitPrice) {
				cout << "Mobilephone:" << endl;
				mobile[j].ShowMobileInfo();
			}
		}
	}

	system("pause");
}

void FilterByCount(PC *&computer, int &computersCount, Laptop *&laptop, int &laptopsCount, Monitor *&monitor, int &monitorsCount, Mobile *&mobile, int &mobilesCount) {
	system("cls");
	int limitCount = 0;
	int size = 0;
	size = computersCount + laptopsCount + monitorsCount + mobilesCount;
	int *arr = new int[size];
	int laptopIterator = 0, monitorIterator = 0, mobileIterator = 0;
	for (int i = 0; i < size; i++)
	{
		if (i < computersCount) {
			arr[i] = computer[i].count;
		}
		else if (i >= computersCount && i < computersCount + laptopsCount) {
			arr[i] = laptop[laptopIterator].count;
			laptopIterator++;
		}
		else if (i >= computersCount + laptopsCount && i < computersCount + laptopsCount + monitorsCount) {
			arr[i] = monitor[monitorIterator].count;
		}
		else {
			arr[i] = mobile[mobileIterator].count;
		}

	}
	cout << "Enter limited count: ";
	cin >> limitCount;
	system("cls");
	cout << "Limited count - " << limitCount << " :" << endl;
	for (int i = 0; i < size; i++) {

		for (int j = 0; j < size; j++) {
			if (arr[i] == computer[j].count&&arr[i] <= limitCount) {
				cout << "PC:" << endl;
				computer[j].ShowComputerInfo();
			}
			if (arr[i] == laptop[j].count&&arr[i] <= limitCount) {
				cout << "Laptop:" << endl;
				laptop[j].ShowLaptopInfo();
			}
			if (arr[i] == monitor[j].count&&arr[i] <= limitCount) {
				cout << "Monitor:" << endl;
				monitor[j].ShowMonitorInfo();
			}
			if (arr[i] == mobile[j].count&&arr[i] <= limitCount) {
				cout << "Mobilephone:" << endl;
				mobile[j].ShowMobileInfo();
			}
		}
	}

	system("pause");
}




void ReadFile(PC *&computer, int &computersCount) {
	int size = 0;
	
	char temp[255];
	string path = "PC.txt";
	ifstream readFile;

	string tempHouseNumber;

	readFile.open(path);
	if (!readFile.is_open()) {
		cout << "Can't open file!" << endl;
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

		
		/*delete computer;*/
		computer = newComputer;
	}
	readFile.close();


	

}


