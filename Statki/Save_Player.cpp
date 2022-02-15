#include <iostream>
#include <fstream>

using namespace std;

void Save_Player (int plansza[10][10])
{
    fstream plik;

    plik.open("Plansza_gracz.txt", ios::out);

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            plik << plansza[i][j];
        }
        plik << endl;
    }

    plik.close();
}