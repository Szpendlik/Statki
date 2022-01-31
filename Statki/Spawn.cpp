#include <iostream>
#include <random>
#include <ctime>
#include <iomanip>
#include "Nag³ówek.h"

using namespace std;

void Spawn(int plansza[10][10])
{
    for (int i = 0; i < 10; i++) cout << setw(3) << i << "";
    cout << endl << endl;
    for (int i = 0; i < 10; i++) {
        cout << setw(2) << i << "   ";
        for (int j = 0; j < 10; j++) {
            cout << setw(2) << plansza[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
	cout << endl;
	Set_Ships();
}