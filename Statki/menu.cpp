#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <conio.h>
#include "Nag³ówek.h"

using namespace std;

void menu()
{
	int wybierz = 0;
	int pole[10][10]{};
		
	COORD x;
	x.X = 50;
	x.Y = 0;

	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, 240);	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), x);
	
	cout << "Wybierz z ponizszych: ";

	x.X = 45;
	x.Y = 3;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), x);
	cout << "1: Zobacz jak wyglada mapa statkow: ";
	
	x.X = 48;
	x.Y = 5;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), x);
	cout << "2: Zasady gry w statki: ";

	x.X = 49;
	x.Y = 7;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), x);
	cout << "3: Ustaw sobie statki: ";

	x.X = 55;
	x.Y = 15;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), x);
	cout << "9: Wyjdz: ";

	cout << endl;

	cin >> wybierz;

	switch(wybierz)
	{
		case 1:
			system("cls");
			Map(pole);
			system("pause");
			system("cls");
			menu();
		break;
		case 2:
			system("cls");
			How_to_Play();
			system("pause");
			system("cls");
			menu();
		break;
		case 3:
			system("cls");
			Spawn();
			system("pause");
			system("cls");
			menu();
		break;
		case 9:
			system("cls");
			cout << "Dziekuje za skorzystanie z uslug Szpendlik Sp.Zoo ";
			system("pause");
		break;
	}

}
