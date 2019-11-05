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
	/*Розв'язувані задачі: видача зведень про товари (опис, ціна в грн. і у.о., кількість на складі, марка тощо) .Реалізувати наступні сервіси:
		Заповнення бази даних
		Перегляд усіх даних
		Доповнення бази даних новим записом
		Видалення із бази даних
		Упорядкування по полях : тип товару, ціна
		Пошук : характеристики комп'ютера марки ХХ
		Вибірка : принтери за ціною не більш Y; товари, яких на складі залишилося менше 5 штук
		Корекція : зміна ціни в гривнях, у зв'язку зі зміною курсу долара
		Табличний звіт : інформація про товари; упорядкування по типах(окремо - принтери, комп'ютери, монітори тощо)
		Додаткові вимоги : перевірка на введення ціни товару(повинна бути більше 0 грн.), а також на те, щоб ціна в грн.відповідала ціні в у.о.
		Для обробки даних скористатися динамічним масивом покажчиків на структури відповідного типу.
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