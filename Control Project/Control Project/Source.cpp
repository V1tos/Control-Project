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


	Start();
	while (!exit) {
		system("cls");
		cout << "1 - Add new element\n2 - Delete element\n3 - Sort by price\n4 - Search by name\n5 - Filter\n6 - Change price\n7 - Show information\n0 - Exit\nYour choice: ";
		cin >> mainChoice;

		switch (mainChoice)
		{
		case 1:
			system("cls");
			cout << "1 - Add PC\n2 - Add laptop\n3 - Add monitor\n4 - Add mobilephone\nYour choice: ";
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
			cout << "1 - Delete PC\n2 - Delete laptop\n3 - Delete monitor\n4 - Delete mobilephone\nYour choice: ";
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
			cout << "1 - Search PC\n2 - Search laptop\n3 - Search monitor\n4 - Search mobilephone\nYour choice: ";
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
			cout << "1 - Filter by price\n2 - Filter by count\nYour choice: ";
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
			cout << "1 - Change PC\n2 - Change laptop\n3 - Change monitor\n4 - Change mobilephone\nYour choice: ";
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
			cout << "1 - Show PC information\n2 - Show laptop information\n3 - Show monitor information\n4 - Show mobilephone information\n5 - Show all information\nYour choice: ";
			cin >> infoChoice;
			switch (infoChoice)
			{
			case 1:
				ComputerList(CTDepartment.pc, CTDepartment.pcCount);
				break;
			case 2:
				LaptopList(CTDepartment.laptop, CTDepartment.laptopsCount);
				break;
			case 3:
				MonitorList(CTDepartment.monitor, CTDepartment.monitorsCount);
				break;
			case 4:
				MobileList(CTDepartment.mobile, CTDepartment.mobilesCount);
				break;
			case 5:
				ShowAllList(CTDepartment.pc, CTDepartment.pcCount, CTDepartment.laptop, CTDepartment.laptopsCount, CTDepartment.monitor, CTDepartment.monitorsCount, CTDepartment.mobile, CTDepartment.mobilesCount);
				break;
			default:
				break;
			}

			break;
		case 0:
			system("cls");
			exit = true;
			break;
		default:
			cout << "Wrong choice!\nTry again" << endl;
			break;
		}

	}



}

int main() {

	Menu();
	/*asdasdasd*/
	system("pause");
	return 0;
}