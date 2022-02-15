#include <iostream>
#include <random>
#include <fstream>
#include <ctime>
#include "Nag³ówek.h"

using namespace std;

void Game()
{
	fstream plik, plik1;
	char tab_kom[10][10]{}, tab_gra[10][10]{};
	bool wynik = true;

	plik.open("Plansza_gracz.txt", ios::in);
	plik1.open("Plansza_Komputer.txt", ios::in);

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			plik >> tab_gra[i][j];
		}
	}

	for (int x = 0; x < 10; x++)
	{
		for (int y = 0; y < 10; y++)
		{
			plik1 >> tab_kom[x][y];
		}
	}


	while (wynik == true)
	{
		cout << "Twoj ruch: " << endl;
		Player_move(tab_kom, wynik);
		cout << "Ruch komputera: "<< endl;
		Computer_move(tab_gra, wynik);
	}
	
	plik.close();
	plik1.close();

}