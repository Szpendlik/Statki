#include <iostream>
#include <iomanip>
#include <random>
#include <ctime>

using namespace std;

void Map(int plansza[10][10])
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

}