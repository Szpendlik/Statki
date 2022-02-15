#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <conio.h>
#include "Nag³ówek.h"

using namespace std;

void menu()
{
	int wybierz = 0;
	int pole[10][10];
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, 240);

	for (int i=0; i<100 ;i++)
	{
		for (int j = 0; j < 120; j++)
		{
			cout << " ";
		}
		cout << endl;
	}
		
	COORD x;
	x.X = 50;
	x.Y = 0;

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

	x.X = 37;
	x.Y = 9;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), x);
	cout << "4: Ustaw automatycznie statki na swojej planszy: ";

	x.X = 37;
	x.Y = 11;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), x);
	cout << "5: Ustaw automatycznie statki komputerowi: ";

	x.X = 52;
	x.Y = 13;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), x);
	cout << "6: Zobacz plansze: ";

	x.X = 54;
	x.Y = 15;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), x);
	cout << "7: Zacznij gre: ";

	x.X = 48;
	x.Y = 17;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), x);
	cout << "8: Usun zawartosc plaszy: ";

	x.X = 55;
	x.Y = 19;

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
			Set_Ships();
			system("pause");
			system("cls");
			menu();
		break;
		case 4:
			system("cls");
			Player_Ships();
			system("pause");
			system("cls");
			menu();
			break;
		case 5:
			system("cls");
			Computer_Ships();
			system("pause");
			system("cls");
			menu();
		case 6:
			system("cls");
			See_Files();
			system("pause");
			system("cls");
			menu();
			break;
		case 7:
			system("cls");
			Game();
			system("pause");
			system("cls");
			menu();
			break;
		case 8:
			system("cls");
			Delete_Files();
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
