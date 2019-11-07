#include "Department.h"

struct Printer
{

};

template <typename T>
void CopyData(T data1, T data2) {
	data2 = data1;
}

void AddComputer(PC *&computer, int &computersCount) {
	system("cls");
	int count = 0;
	cout << "How many PC do you want to add?" << endl;
	cin >> count;
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
			CopyData(computer[i],newComputer[i]);
		}

	};



	computersCount += count;



	delete[] computer;
	computer = newComputer;


}

void ComputerList(PC *&computer, int &computersCount) {
	system("cls");
	for (int i = 0; i < computersCount; i++)
	{
		cout << "*************************************************************" << endl;
		cout << "PC N" << i + 1 <<" :" << endl;
		computer[i].ShowComputerInfo();
		cout << "*************************************************************" << endl;
	}

}


void AddMonitor(Monitor *&monitor, int &monitorsCount) {
	system("cls");
	int count = 0;
	cout << "How many monitors do you want to add?" << endl;
	cin >> count;
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
			CopyData(monitor[i],newMonitor[i]);
		}

	};

	monitorsCount += count;

	delete[] monitor;
	monitor = newMonitor;

}

void DeleteMonitor(Monitor *&monitor, int &monitorsCount) {
	system("cls");

	if (monitorsCount == 1) {
		Monitor *newMonitor = new Monitor[monitorsCount - 1];
		monitorsCount--;
		delete[] monitor;
		monitor = newMonitor;
		cout << "Deleted" << endl;


	}
	else if (monitorsCount == 0) {
		cout << "There aren't clients" << endl;
	}
	else
	{
		Monitor *newMonitor = new Monitor[monitorsCount - 1];
		int number = 0;
		cout << "Enter number of client (1 - " << monitorsCount << ")" << endl;
		cin >> number;


		for (int i = 0; i < monitorsCount; i++) {
			if (i >= number - 1 && i < monitorsCount - 1) {
				swap(peoples[i].name, peoples[i + 1].name);
				swap(peoples[i].surname, peoples[i + 1].surname);
				swap(peoples[i].Date.day, peoples[i + 1].Date.day);
				swap(peoples[i].Date.month, peoples[i + 1].Date.month);
				swap(peoples[i].Date.year, peoples[i + 1].Date.year);
			}

		}

		for (int i = 0; i < peoplesCount - 1; i++) {
			delClient[i].name = peoples[i].name;
			delClient[i].surname = peoples[i].surname;
			delClient[i].Date.day = peoples[i].Date.day;
			delClient[i].Date.month = peoples[i].Date.month;
			delClient[i].Date.year = peoples[i].Date.year;
		}


		cout << "Deleted" << endl;

		peoplesCount--;


		delete[] peoples;
		peoples = delClient;


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
}

void AddLaptop(Laptop *&laptop, int &laptopsCount) {
	system("cls");
	int count = 0;
	cout << "How many laptops do you want to add?" << endl;
	cin >> count;
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
}

void AddMobile(Mobile *&mobile, int &mobilesCount) {
	system("cls");
	int count = 0;
	cout << "How many mobilephones do you want to add?" << endl;
	cin >> count;
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
}



void Menu() {
	Department department;

	cout <<""




}

int main() {

	/*int computersCount = 0;
	PC *computer = new PC[computersCount];
	AddComputer(computer, computersCount);
	ComputerList(computer, computersCount);*/

	//int monitorsCount = 0;
	//Monitor *monitor = new Monitor[monitorsCount];
	//AddMonitor(monitor, monitorsCount);
	//MonitorList(monitor, monitorsCount);


	

	/*int laptopsCount = 0;
	Laptop *laptop = new Laptop[laptopsCount];*/
	
	/*AddLaptop(department.laptop, department.laptopsCount);
	LaptopList(department.laptop, department.laptopsCount);*/

	
	
	 
	
	







	system("pause");
	return 0;
}