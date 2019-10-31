#include <iostream>
#include <string>
#include "PC.h"
using namespace std;


//struct PC
//{
//	string computerName;
//	string devCountry;
//	int powerSupply;
//	int uahPrice, dolPrice;
//	int weight;
//	int safeGuard;
//	
//	
//	struct { string name; double freq1; double freq2; int generation; }Processor;
//	struct { string type; int freq; int memory; }RAM;
//	struct { string name; int memory; }Videocard;
//	struct { string type; int memory; }DiskDrive;
//	struct { int width; int height; int length; }Size;
//
//	void ShowComputerInfo() {
//		cout << "Name:             " << computerName << endl;
//		cout << "Author country:   " << devCountry << endl;
//		cout << "Processor:        " << PCprocessor.name << " (" << PCprocessor.freq1 << " - " << PCprocessor.freq2 << " GHz) " << PCprocessor.generation << "th generation" << endl;
//		cout << "RAM:              " << PCRAM.type << "-" << PCRAM.freq << " MHz (" << PCRAM.memory << " Gb)" << endl;
//		cout << "Videocard:        " << PCVideoCard.name << " (" << PCVideoCard.memory << " Gb)" << endl;
//		cout << "Disk drive:       " << PCDiskDrive.type << " (" << PCDiskDrive.memory << " Gb)" << endl;
//		cout << "Weight:           " << weight << " kg" << endl;
//		cout << "Size:             " << Size.width << "x" << Size.height << "x" << Size.length << " mm" << endl;
//		cout << "Power supply:     " << powerSupply << " kW" << endl;
//		cout << "Safeguard:        " << safeGuard << " month" << endl;
//	}
//};

struct Laptop
{



};

struct Printer
{

};

struct Monitor {
	string name;
	string devCountry;
	string matrixType;
	string colour;
	int refreshRate;
	int weight;

	struct { int width; int height; }Expansion;



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
	int computersCount = 0;
	PC *computer = new PC[computersCount];
	AddComputer(computer, computersCount);
	ComputerList(computer, computersCount);


	
	
	 
	
	







	system("pause");
	return 0;
}