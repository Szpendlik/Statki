#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <random>
#include "Nag³ówek.h"

using namespace std;

void Player_Ships()
{
    int plansza[10][10]{};

    cout << "- ustawiam 4'" << endl;
    Player_Spawn(plansza, 4);

    for (int i = 0; i < 2; i++) {
        cout << "- ustawiam 3'" << endl;
        Player_Spawn(plansza, 3);
    }

    for (int i = 0; i < 3; i++) {
        cout << "- ustawiam 2'" << endl;
        Player_Spawn(plansza, 2);
    }

    for (int i = 0; i < 4; i++) {
        cout << "- ustawiam 1'" << endl;
        Player_Spawn(plansza, 1);
    }

    cout << "koniec rozmieszczania" << endl;

    system("pause");
    system("cls");
    menu();
}