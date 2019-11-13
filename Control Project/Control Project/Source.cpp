#include "Department.h"


//Заповнення бази даних
//Перегляд усіх даних
//Доповнення бази даних новим записом
//Видалення із бази даних
//Упорядкування по полях : тип товару, ціна
//Пошук : характеристики комп'ютера марки ХХ 
//Вибірка : принтери за ціною не більш Y; товари, яких на складі залишилося менше 5 штук
//Корекція : зміна ціни в гривнях, у зв'язку зі зміною курсу долара 
//Табличний звіт : інформація про товари; упорядкування по типах(окремо - принтери, комп'ютери, монітори тощо) 
//Додаткові вимоги : перевірка на введення ціни товару(повинна бути більше 0 грн.), а також на те, щоб ціна в грн.відповідала ціні в у.о.
//Для обробки даних скористатися динамічним масивом покажчиків на структури відповідного типу.

void Menu() {
	Department CTDepartment; //Computer's Technique 
	bool exit = false;
	short mainChoice = 0, addChoice = 0, delChoice = 0, searchChoice = 0, filterChoice = 0, changeChoice = 0, infoChoice = 0;

	PCReadFile(CTDepartment.pc, CTDepartment.pcCount);
	MonitorReadFile(CTDepartment.monitor, CTDepartment.monitorsCount);
	LaptopReadFile(CTDepartment.laptop, CTDepartment.laptopsCount);
	MobileReadFile(CTDepartment.mobile, CTDepartment.mobilesCount);


	/*Start();*/
	while (!exit) {
		system("cls");
		cout << "\t\t\t\t\t\t\t\t###################################################" << endl;
		cout << "\t\t\t\t\t\t\t\t#                                                 #" << endl;
		cout << "\t\t\t\t\t\t\t\t#         Computer's technique department         #" << endl;
		cout << "\t\t\t\t\t\t\t\t#                                                 #" << endl;
		cout << "\t\t\t\t\t\t\t\t###################################################" << endl;
		cout << "\t\t\t\t\t\t\t\t\t\t1 - Add new element\n\t\t\t\t\t\t\t\t\t\t2 - Delete element\n\t\t\t\t\t\t\t\t\t\t3 - Sort by price\n\t\t\t\t\t\t\t\t\t\t4 - Search by name\n\t\t\t\t\t\t\t\t\t\t5 - Filter\n\t\t\t\t\t\t\t\t\t\t6 - Change price\n\t\t\t\t\t\t\t\t\t\t7 - Show information\n\t\t\t\t\t\t\t\t\t\t0 - Exit\n\t\t\t\t\t\t\t\t\t\tYour choice: ";
		cin >> mainChoice;

		switch (mainChoice)
		{
		case 1:
			system("cls");
			cout << "\t\t\t\t\t\t\t\t\t\t1 - Add PC\n\t\t\t\t\t\t\t\t\t\t2 - Add laptop\n\t\t\t\t\t\t\t\t\t\t3 - Add monitor\n\t\t\t\t\t\t\t\t\t\t4 - Add mobilephone\n\t\t\t\t\t\t\t\t\t\tYour choice: ";
			cin >> addChoice;
			switch (addChoice)
			{
			case 1:
				AddComputer(CTDepartment.pc, CTDepartment.pcCount);
				break;
			case 2:
				AddLaptop(CTDepartment.laptop, CTDepartment.laptopsCount);
				break;
			case 3:
				AddMonitor(CTDepartment.monitor, CTDepartment.monitorsCount);
				break;
			case 4:
				AddMobile(CTDepartment.mobile, CTDepartment.mobilesCount);
				break;
			default:
				break;
			}
			break;
		case 2:
			system("cls");
			cout << "\t\t\t\t\t\t\t\t\t\t1 - Delete PC\n\t\t\t\t\t\t\t\t\t\t2 - Delete laptop\n\t\t\t\t\t\t\t\t\t\t3 - Delete monitor\n\t\t\t\t\t\t\t\t\t\t4 - Delete mobilephone\n\t\t\t\t\t\t\t\t\t\tYour choice: ";
			cin >> delChoice;
			switch (delChoice)
			{
			case 1:
				DeleteComputer(CTDepartment.pc, CTDepartment.pcCount);
				break;
			case 2:
				DeleteLaptop(CTDepartment.laptop, CTDepartment.laptopsCount);
				break;
			case 3:
				DeleteMonitor(CTDepartment.monitor, CTDepartment.monitorsCount);
				break;
			case 4:
				DeleteMobile(CTDepartment.mobile, CTDepartment.mobilesCount);
				break;
			default:
				break;
			}

			break;
		case 3:
			SortByPrice(CTDepartment.pc, CTDepartment.pcCount, CTDepartment.laptop, CTDepartment.laptopsCount, CTDepartment.monitor, CTDepartment.monitorsCount, CTDepartment.mobile, CTDepartment.mobilesCount);
			break;
		case 4:
			system("cls");
			cout << "\t\t\t\t\t\t\t\t\t\t1 - Search PC\n\t\t\t\t\t\t\t\t\t\t2 - Search laptop\n\t\t\t\t\t\t\t\t\t\t3 - Search monitor\n\t\t\t\t\t\t\t\t\t\t4 - Search mobilephone\n\t\t\t\t\t\t\t\t\t\tYour choice: ";
			cin >> searchChoice;
			switch (searchChoice)
			{
			case 1:
				SearchComputer(CTDepartment.pc, CTDepartment.pcCount);
				break;
			case 2:
				SearchLaptop(CTDepartment.laptop, CTDepartment.laptopsCount);
				break;
			case 3:
				SearchMonitor(CTDepartment.monitor, CTDepartment.monitorsCount);
				break;
			case 4:
				SearchMobile(CTDepartment.mobile, CTDepartment.mobilesCount);
				break;
			default:
				break;
			}
			break;
		case 5:
			system("cls");
			cout << "\t\t\t\t\t\t\t\t\t\t1 - Filter by price\n\t\t\t\t\t\t\t\t\t\t2 - Filter by count\n\t\t\t\t\t\t\t\t\t\tYour choice: ";
			cin >> filterChoice;
			switch (filterChoice)
			{
			case 1:
				FilterByPrice(CTDepartment.pc, CTDepartment.pcCount, CTDepartment.laptop, CTDepartment.laptopsCount, CTDepartment.monitor, CTDepartment.monitorsCount, CTDepartment.mobile, CTDepartment.mobilesCount);
				break;
			case 2:
				FilterByCount(CTDepartment.pc, CTDepartment.pcCount, CTDepartment.laptop, CTDepartment.laptopsCount, CTDepartment.monitor, CTDepartment.monitorsCount, CTDepartment.mobile, CTDepartment.mobilesCount);
				break;
			default:
				break;
			}
			break;
		case 6:
			system("cls");
			cout << "\t\t\t\t\t\t\t\t\t\t1 - Change PC\n\t\t\t\t\t\t\t\t\t\t2 - Change laptop\n\t\t\t\t\t\t\t\t\t\t3 - Change monitor\n\t\t\t\t\t\t\t\t\t\t4 - Change mobilephone\n\t\t\t\t\t\t\t\t\t\tYour choice: ";
			cin >> changeChoice;
			switch (changeChoice)
			{
			case 1:
				ChangeComputerPrice(CTDepartment.pc, CTDepartment.pcCount);
				break;
			case 2:
				ChangeLaptopPrice(CTDepartment.laptop, CTDepartment.laptopsCount);
				break;
			case 3:
				ChangeMonitorPrice(CTDepartment.monitor, CTDepartment.monitorsCount);
				break;
			case 4:
				ChangeMobilePrice(CTDepartment.mobile, CTDepartment.mobilesCount);
				break;
			default:
				break;
			}

			break;
		case 7:
			system("cls");
			cout << "\t\t\t\t\t\t\t\t\t\t1 - Show PC information\n\t\t\t\t\t\t\t\t\t\t2 - Show laptop information\n\t\t\t\t\t\t\t\t\t\t3 - Show monitor information\n\t\t\t\t\t\t\t\t\t\t4 - Show mobilephone information\n\t\t\t\t\t\t\t\t\t\t5 - Show all information\n\t\t\t\t\t\t\t\t\t\tYour choice: ";
			cin >> infoChoice;
			switch (infoChoice)
			{
			case 1:
				system("cls");
				ComputerList(CTDepartment.pc, CTDepartment.pcCount);
				cout << "\t\t\t\t\t\t\t\t\t\t";
				system("pause");
				break;
			case 2:
				system("cls");
				LaptopList(CTDepartment.laptop, CTDepartment.laptopsCount);
				cout << "\t\t\t\t\t\t\t\t\t\t";
				system("pause");
				break;
			case 3:
				system("cls");
				MonitorList(CTDepartment.monitor, CTDepartment.monitorsCount);
				cout << "\t\t\t\t\t\t\t\t\t\t";
				system("pause");
				break;
			case 4:
				system("cls");
				MobileList(CTDepartment.mobile, CTDepartment.mobilesCount);
				cout << "\t\t\t\t\t\t\t\t\t\t";
				system("pause");
				break;
			case 5:
				system("cls");
				ShowAllList(CTDepartment.pc, CTDepartment.pcCount, CTDepartment.laptop, CTDepartment.laptopsCount, CTDepartment.monitor, CTDepartment.monitorsCount, CTDepartment.mobile, CTDepartment.mobilesCount);
				cout << "\t\t\t\t\t\t\t\t\t\t";
				system("pause");
				break;
			default:
				break;
			}

			break;
		case 0:
			system("cls");
			char choice;
			cout << "\t\t\t\t\t\t\t\t\t\tSave changes? (y/n): ";
			cin >> choice;

			switch (choice)
			{
			case 'y':
				PCWriteFile(CTDepartment.pc, CTDepartment.pcCount);
				MonitorWriteFile(CTDepartment.monitor, CTDepartment.monitorsCount);
				LaptopWriteFile(CTDepartment.laptop, CTDepartment.laptopsCount);
				MobileWriteFile(CTDepartment.mobile, CTDepartment.mobilesCount);
				system("cls");
				cout << "\t\t\t\t\t\t\t\t\t\tSaved" << endl;
				exit = true;
				break;
			case 'n':
				exit = true;
				break;
			default:
				cout << "\t\t\t\t\t\t\t\t\t\tWrong choice!" << endl;
				cout << "\t\t\t\t\t\t\t\t\t\t";
				system("pause");
				break;
				
			}
			break;
		default:
			cout << "\t\t\t\t\t\t\t\t\t\tWrong choice! Try again" << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t";
			system("pause");
			break;
		}

	}

	delete[] CTDepartment.pc;
	CTDepartment.pc = nullptr;
	delete[] CTDepartment.laptop;
	CTDepartment.laptop = nullptr;
	delete[] CTDepartment.monitor;
	CTDepartment.monitor = nullptr;
	delete[] CTDepartment.mobile;
	CTDepartment.mobile = nullptr;



}

int main() {

	Menu();
	
	cout << "\t\t\t\t\t\t\t\t\t\t";
	system("pause");
	return 0;
}

