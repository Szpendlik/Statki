#include <iostream>
#include "Nag³ówek.h"

using namespace std;

void Type()
{
	int how_long;

	cout << "1: Wybierz 1-no masztowiec" << endl;
	cout << "2: Wybierz 2-u masztowiec" << endl;
	cout << "3: Wybierz 3-y masztowiec" << endl;
	cout << "4: Wybierz 4-ro masztowiec" << endl;

	cin >> how_long;

	switch (how_long)
	{
		case 1:
			Add_Ship();
			break;

		case 2:

			break;

		case 3:	

			break;

		case 4:

			break;
	}
}