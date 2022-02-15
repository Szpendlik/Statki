#include <iostream>
#include <fstream>
#include "Nag³ówek.h"

using namespace std;

void Add_Ship(int s_long)
{
	
	bool zatwierdz = false;
	
	int pozycja_x, pozycja_y; 
	int pole[10][10]{};

	cout << "Podaj pozycje statku: (x, y)" << endl;
	
	cin >> pozycja_x;
	cin >> pozycja_y;

	system("cls");

	if (pozycja_x > 10 || pozycja_y > 10)
	{
		cout << "Brak takich kordynatow" << endl << "Wprowadz jeszcze raz: " << endl;
		Add_Ship(s_long);
	}
	else
	{
		cout << "Poprawna pozycja: x=" << pozycja_x << " y=" << pozycja_y << endl;
		Spawn(pole, pozycja_x, pozycja_y, s_long);
	}
}