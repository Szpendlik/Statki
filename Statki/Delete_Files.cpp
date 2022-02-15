#include <iostream>
#include <fstream>

using namespace std;

void Delete_Files()
{
	fstream plik, plik1, plik2;
	int wybierz;

	cout << "1: Usun plansze gracza: ";
	cout << "2: Usun plansze komputera: ";

	cin >> wybierz;

	switch (wybierz)
	{
		case 1:
			plik.open("Plansza_gracz.txt", ios::out | ios::trunc);
			plik.close();
			break;
		case 2:
			plik1.open("Plansza_Komputer.txt", ios::out | ios::trunc);
			plik1.close();
			break;
	}
	
}