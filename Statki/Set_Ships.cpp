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
			for (int i = 0; i < 10; i++)
			{
				for (int j = 0; j < 10; j++)
				{
					cout << " 0 ";
				}
				cout << endl;
			}
			cout << endl;
			Add_Ship();
		break;
		//case 2:
			//Remove_Ship();
		//break;
	}
}