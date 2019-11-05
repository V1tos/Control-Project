#include "PC.h"
#include "Monitor.h"
#include "Laptop.h"


struct Printer
{

};



void AddComputer(PC *&computer, int &computersCount) {
	system("cls");
	int count = 0;
	cout << "How many PC do you want to add?" << endl;
	cin >> count;
	PC *newComputer = new PC[computersCount + count];



	for (int i = 0; i < computersCount + count; i++) {
		if (i >= computersCount) {
			cout << "Computer N" << i + 1 << " :" << endl;
			newComputer[i].CreateComputer();
			system("cls");
			cout << "Added" << endl;
		}
		else
		{
			newComputer[i]=computer[i];
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
		cout << "Computer N" << i + 1 <<" :" << endl;
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
			newMonitor[i] = monitor[i];
		}

	};

	monitorsCount += count;

	delete[] monitor;
	monitor = newMonitor;

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
			cout << "Monitor N" << i + 1 << " :" << endl;
			newLaptop[i].CreateLaptop();
			system("cls");
			cout << "Added" << endl;
		}
		else
		{
			newLaptop[i] = laptop[i];
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
		cout << "Monitor N" << i + 1 << " :" << endl;
		laptop[i].ShowLaptopInfo();
		cout << "*************************************************************" << endl;
	}
}



void Menu() {

}

int main() {
	setlocale(LC_ALL, "RU");
	/*����'������ ������: ������ ������� ��� ������ (����, ���� � ���. � �.�., ������� �� �����, ����� ����) .���������� ������� ������:
		���������� ���� �����
		�������� ��� �����
		���������� ���� ����� ����� �������
		��������� �� ���� �����
		������������� �� ����� : ��� ������, ����
		����� : �������������� ����'����� ����� ��
		������ : �������� �� ����� �� ���� Y; ������, ���� �� ����� ���������� ����� 5 ����
		�������� : ���� ���� � �������, � ��'���� � ����� ����� ������
		��������� ��� : ���������� ��� ������; ������������� �� �����(������ - ��������, ����'�����, ������� ����)
		�������� ������ : �������� �� �������� ���� ������(������� ���� ����� 0 ���.), � ����� �� ��, ��� ���� � ���.��������� ��� � �.�.
		��� ������� ����� ������������ ��������� ������� ��������� �� ��������� ���������� ����.
*/
	/*int computersCount = 0;
	PC *computer = new PC[computersCount];
	AddComputer(computer, computersCount);
	ComputerList(computer, computersCount);*/

	//int monitorsCount = 0;
	//Monitor *monitor = new Monitor[monitorsCount];
	//AddMonitor(monitor, monitorsCount);
	//MonitorList(monitor, monitorsCount);

	int laptopsCount = 0;
	Laptop *laptop = new Laptop[laptopsCount];
	AddLaptop(laptop, laptopsCount);
	LaptopList(laptop, laptopsCount);


	
	
	 
	
	







	system("pause");
	return 0;
}