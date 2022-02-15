#include <iostream>
#include <random>
#include <ctime>
#include <iomanip>
#include <fstream>
#include "Nag³ówek.h"

using namespace std;

void Spawn(int plansza[10][10], int x, int y, int s_long)
{
    int kierunek, powrot;
    fstream plik;
    int plansza1[10][10]{}, pos_x = x, pos_y = y, sh_long = s_long;

    plik.open("Plansza_gracza.txt", ios::out | ios::app);
    if(ifstream ("Plansza_gracza.txt", ios::ate).tellg())
    {
        if (sh_long == 1)
        {
            plansza1[pos_x - 1][pos_y - 1] = sh_long;
        }
        else 
        {
            cout << "1 :Wybierz lewo" << endl;
            cout << "2: Wybierz prawo" << endl;
            cout << "3: Wybierz dol" << endl;
            cout << "4: Wybierz gore" << endl;

            cin >> kierunek;
            
            for (int i = 0; i < sh_long; i++)
            {
                if (kierunek == 1)
                {
                    if (pos_x - sh_long < 0)
                    {
                        cout << "Statek zle polozony: " << endl;
                        cout << "1: Zmien pozycje" << endl;
                        cout << "2: Wybierz kierunek" << endl;

                        cin >> powrot;
                        if (powrot == 1)
                            Add_Ship(sh_long);
                        else if (powrot == 2)
                            Spawn(plansza1, pos_x, pos_y, sh_long);
                    }
                    else plansza1[pos_y - 1][pos_x - i - 1] = sh_long;
                    
                }
                else if (kierunek == 2)
                {
                    if (pos_x + sh_long > 10)
                    {
                        cout << "Statek zle polozony: " << endl;
                        cout << "1: Zmien pozycje" << endl;
                        cout << "2: Wybierz kierunek" << endl;

                        cin >> powrot;
                        if (powrot == 1)
                            Add_Ship(sh_long);
                        else if (powrot == 2)
                            Spawn(plansza1, pos_x, pos_y, sh_long);
                    }
                    else plansza1[pos_y - 1][pos_x + i - 1] = sh_long;
                }
                else if (kierunek == 3)
                {
                    if (pos_y + sh_long > 10)
                    {
                        cout << "Statek zle polozony: " << endl;
                        cout << "1: Zmien pozycje" << endl;
                        cout << "2: Wybierz kierunek" << endl;

                        cin >> powrot;
                        if (powrot == 1)
                            Add_Ship(sh_long);
                        else if (powrot == 2)
                            Spawn(plansza1, pos_x, pos_y, sh_long);
                    }
                    else plansza1[pos_y + i - 1][pos_x - 1] = sh_long;
                }
                else
                {
                    if (pos_y - sh_long < 0)
                    {
                        cout << "Statek zle polozony: " << endl;
                        cout << "1: Zmien pozycje" << endl;
                        cout << "2: Wybierz kierunek" << endl;

                        cin >> powrot;
                        if (powrot == 1)
                            Add_Ship(sh_long);
                        else if (powrot == 2)
                            Spawn(plansza1, pos_x, pos_y, sh_long);
                    }
                    else  plansza1[pos_y - i - 1][pos_x - 1] = sh_long;
                }
            }
        }
        plik.close();
        plik.open("Plansza_gracza.txt", ios::trunc | ios::out);
        
        for (int i = 1; i <= 10; i++) plik << setw(3) << i << "";
        plik << endl << endl;
        for (int i = 0; i < 10; i++)
        {
            plik << setw(2) << i + 1 << "   ";
            for (int j = 0; j < 10; j++)
            {
                plik << setw(2) << plansza1[i][j] << " ";
            }
            plik << endl;
        }
        plik << endl;
        plik << endl;
    }
    else 
    {
        for (int i = 1; i <= 10; i++) plik << setw(3) << i << "";
        plik << endl << endl;
        for (int i = 0; i < 10; i++)
        {
            plik << setw(2) << i + 1 << "   ";
            for (int j = 0; j < 10; j++)
            {
                plik << setw(2) << plansza[i][j] << " ";
            }
            plik << endl;
        }
        plik << endl;
        plik << endl;

        Spawn(plansza, pos_x, pos_y, sh_long);
    }

    plik.close();
}