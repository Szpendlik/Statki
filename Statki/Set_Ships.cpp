#include <iostream>
#include "Nag³ówek.h"

using namespace std;

void Set_Ships()
{
	int wybierz;

	cout << "1: Dodaj statek " << endl;
	cout << "2: Usun statek" << endl;
	 
	cin >> wybierz;

	switch (wybierz)
	{
		case 1:
			system("cls");
			Map();
			Type();
		break;
		//case 2:
			//Remove_Ship();
		//break;
	}
}