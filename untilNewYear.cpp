#include <iostream>
#include "case2.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int n;
	cin >> n;
	switch (n)
	{
	case 2:
		system("cls");
		case2();
		break;
	default:
		break;
	}
}
