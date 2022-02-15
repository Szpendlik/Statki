#include <iostream>
#include <fstream>
#include <iomanip>
#include <fstream>
#include <random>
#include <ctime>

using namespace std;

void See_Files()
{
	fstream plik, plik1;
	char tab_kom[10][10]{}, tab_gra[10][10]{};
	int wybor, x=0, y=0;

	cout << "1: Pokaz plansze gracza:" ;
	cout << "2: Pokaz plansze komputera: ";

	cin >> wybor;

	switch (wybor)
	{
	
	case 1:
		plik.open("Plansza_gracz.txt", ios::in);
		
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				plik >> tab_gra[i][j];
			}
		}
		
		for (int i = 0; i < 10; i++) cout << setw(3) << i << "";
		cout << endl << endl;
		for (int i = 0; i < 10; i++) {
			cout << setw(2) << i << "   ";
			for (int j = 0; j < 10; j++) {
				cout << setw(2) << tab_gra[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;

		plik.close();
		break;
	case 2:
		plik1.open("Plansza_Komputer.txt", ios::in);

		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				plik1 >> tab_kom[i][j];
			}
		}

		for (int i = 0; i < 10; i++) cout << setw(3) << i << "";
		cout << endl << endl;
		for (int i = 0; i < 10; i++) {
			cout << setw(2) << i << "   ";
			for (int j = 0; j < 10; j++) {
				cout << setw(2) << tab_kom[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;

		plik1.close();
		break;
	}

}