#include <iostream>
#include "case2.h"
#include "case1.h"
#include "case3.h"
using namespace std;

int main()
{
setlocale(LC_ALL, "Russian");
system("mode con cols=35 lines=25");

int choice = 0;
while (choice != 4) {
	cout << "Выберите действие:" << endl;
	cout << "1. Вывести дату, порядковый номер дня в году" << endl;
	cout << "2. Вывести сколько дней осталось до Нового года" << endl;
	cout << "3. Вывести новогоднюю цитату" << endl;
	cout << "4. Выйти" << endl;
	cin >> choice;

	switch (choice)
	{
	case 1: 
		system("cls");
		cout << "Выполнено действие 1\n";
		case1();
		break;
	case 2:
		system("cls");
		cout << "Выполнено действие 2\n";
		case2();
		break;
	case 3:
		system("cls");
		cout << "Выполнено действие 3\n";
		case3();
		break;
	case 4:
		cout << "Выход из программы\n";
		break;
	default:
		break;
	}
}
return 0;
}
