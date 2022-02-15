#include <iostream>
#include "Nag³ówek.h"

using namespace std;

void Type()
{
	int how_long;

	cout << "1: Dodaj cztery 1-no masztowce" << endl;
	cout << "2: Dodaj trzy 2-u masztowiec" << endl;
	cout << "3: Dodaj dwa 3-y masztowiec" << endl;
	cout << "4: Dodaj jeden 4-ro masztowiec" << endl;

	cin >> how_long;

	switch (how_long)
	{
		case 1:
			for (int i = 0; i < 4; i++)
			{
				Add_Ship(how_long);
			}
			break;

		case 2:
			for (int i = 0; i < 3; i++)
			{
				Add_Ship(how_long);
			}
			break;

		case 3:	
			for (int i = 0; i < 2; i++)
			{
				Add_Ship(how_long);
			}
			break;

		case 4:
			Add_Ship(how_long);
			break;
	}
}