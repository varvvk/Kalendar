﻿#include <iostream>
#include "case2.h"
#include "case1.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	system("mode con cols=35 lines=25");

	int n;
	cin >> n;
	switch (n)
	{
	case 1: 
		system("cls");
		case1();
		break;
	case 2:
		system("cls");
		case2();
		break;
	default:
		break;
	}
}