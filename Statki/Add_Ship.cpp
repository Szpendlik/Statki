#include <iostream>
#include "Nag³ówek.h"

using namespace std;

void Add_Ship()
{
	int pozycja_x, pozycja_y;

	cout << "Podaj pozycje statku: (x, y)" << endl;
	
	cin >> pozycja_x;
	cin >> pozycja_y;

	system("cls");

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << " 0 ";
		}
		cout << endl;
	}
	cout << endl;

	if (pozycja_x > 9 || pozycja_y > 9)
	{
		cout << "Brak takich kordynatow" << endl << "Wprowadz jeszcze raz: " << endl;
		Add_Ship();
	}
	else
	{
		cout << "Poprawna pozycja: x=" << pozycja_x << " y=" << pozycja_y << endl;
	}
}