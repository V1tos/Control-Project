#include <iostream>
#include <string>

using namespace std;


struct Computer
{
	string computerName;
	string devCountry;
	int powerSupply;
	int uahPrice, dolPrice;
	int weight;
	int safeGuard;
	
	
	struct { string name; double freq1; double freq2; int generation; }Processor;
	struct { string type; int freq; int memory; }RAM;
	struct { string name; int memory; }Videocard;
	struct { string type; int memory; }DiskDrive;
	struct { int width; int height; int length; }Size;



	void ShowComputerInfo() {
		cout << "Name:             " << computerName << endl;
		cout << "Author country:   " << devCountry << endl;
		cout << "Processor:        " << Processor.name <<" ("<< Processor.freq1<<" - "<< Processor.freq2<<" GHz) "<<Processor.generation <<"th generation"<< endl;
		cout << "RAM:              " << RAM.type <<"-"<<RAM.freq << " MHz (" << RAM.memory<<" Gb)" << endl;
		cout << "Videocard:        " << Videocard.name <<" (" << Videocard.memory <<" Gb)" << endl;
		cout << "Disk drive:       " << DiskDrive.type << " (" << DiskDrive.memory << " Gb)" << endl;
		cout << "Weight:           " << weight <<" kg" << endl;
		cout << "Size:             " << Size.width <<"x" << Size.height << "x" << Size.length << " mm" << endl;
		cout << "Power supply:     " << powerSupply <<" kW" << endl;
		cout << "Safeguard:        " << safeGuard << " month" << endl;
	}
};

struct NoteBook
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

void AddComputer(Computer *&computer, int &computersCount) {
	system("cls");
	int count = 0;
	cout << "How many computer do you want to add?" << endl;
	cin >> count;
	Computer *newComputer = new Computer[computersCount + count];



	for (int i = 0; i < computersCount + count; i++) {
		if (i >= computersCount) {
			cout << "Computer N" << i + 1 << " :" << endl;
			cout << "Enter name (ex: Samsung, LG) : ";
			cin >> newComputer[i].computerName;
			cout << "Enter country : ";
			cin >> newComputer[i].devCountry;
			cout << "Enter pocessor name (ex: Intel, AMD) : ";
			cin >> newComputer[i].Processor.name;
			cout << "Enter clock frequency of processor (GHz): ";
			cin >> newComputer[i].Processor.freq1;
			cout << "Enter max frequency of processor (GHz): ";
			cin >> newComputer[i].Processor.freq2;
			cout << "Enter processors generation: ";
			cin >> newComputer[i].Processor.generation;
			cout << "Enter RAMs type (ex: DDR2, DDR3) : ";
			cin >> newComputer[i].RAM.type;
			cout << "Enter frequency of RAM (MHz): ";
			cin >> newComputer[i].RAM.freq;
			cout << "Enter RAMs memory (Gb) : ";
			cin >> newComputer[i].RAM.memory;
			cout << "Enter videocards name (ex: Nvidia, AMD) : ";
			cin >> newComputer[i].Videocard.name;
			cout << "Enter videocards memory (Gb) : ";
			cin >> newComputer[i].Videocard.memory;
			cout << "Enter disk drive type (ex: HDD, SSD) : ";
			cin >> newComputer[i].DiskDrive.type;
			cout << "Enter disk drive memory (Gb): ";
			cin >> newComputer[i].DiskDrive.memory;
			cout << "Enter computers weight (kg): " << endl;
			cin >> newComputer[i].weight;
			cout << "Enter computers size: " << endl;
			cout << "Width (mm): ";
			cin >> newComputer[i].Size.width;
			cout << "Height (mm): ";
			cin >> newComputer[i].Size.height;
			cout << "Length (mm): ";
			cin >> newComputer[i].Size.length;
			cout << "Enter power supply (kW): ";
			cin >> newComputer[i].powerSupply;
			cout << "Enter safeguard (month): ";
			cin >> newComputer[i].safeGuard;
			
			system("cls");
			cout << "Added" << endl;
		}
		else
		{
			newComputer[i].computerName = computer[i].computerName;
			newComputer[i].devCountry = computer[i].devCountry;
			newComputer[i].Processor.name = computer[i].Processor.name;
			newComputer[i].Processor.freq1 = computer[i].Processor.freq1;
			newComputer[i].Processor.freq2 = computer[i].Processor.freq2;
			newComputer[i].Processor.generation = computer[i].Processor.generation;
			newComputer[i].RAM.type = computer[i].RAM.type;
			newComputer[i].RAM.freq = computer[i].RAM.freq;
			newComputer[i].RAM.memory = computer[i].RAM.memory;
			newComputer[i].DiskDrive.type = computer[i].DiskDrive.type;
			newComputer[i].DiskDrive.memory = computer[i].DiskDrive.memory;
			newComputer[i].weight = computer[i].weight;
			newComputer[i].Size.width = computer[i].Size.width;
			newComputer[i].Size.height = computer[i].Size.height;
			newComputer[i].Size.length = computer[i].Size.length;
			newComputer[i].powerSupply = computer[i].powerSupply;
			newComputer[i].safeGuard = computer[i].safeGuard;

		}

	};



	computersCount += count;



	delete[] computer;
	computer = newComputer;




}

void ComputerList(Computer *&computer, int &computersCount) {
	system("cls");
	for (int i = 0; i < computersCount; i++)
	{
		cout << "*************************************" << endl;
		cout << "Computer �" << i + 1 <<" :" << endl;
		computer[i].ShowComputerInfo();
		cout << "*************************************" << endl;
	}

}

void Menu() {

}

int main() {
	setlocale(LC_ALL, "UKR");
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
	Computer *computer = new Computer[computersCount];
	AddComputer(computer, computersCount);
	ComputerList(computer, computersCount);


	
	
	 
	
	







	system("pause");
	return 0;
}