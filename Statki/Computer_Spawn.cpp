#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <random>
#include "Nag³ówek.h"

using namespace std;

void Computer_Spawn(int plansza[10][10], int dl) 
{
    mt19937 generator(time(nullptr));
    uniform_int_distribution<int> distributor10(0, 9);
    uniform_int_distribution<int> distributor4(0, 3);


    int i{}, j{}, k{};
    bool bigbool = false, czyPuste = false, czyKierunku = false;
    i = distributor10(generator);
    j = distributor10(generator);
    k = distributor4(generator);

    while (!bigbool) {

        cout << "sprawdzam czy wolne pole [" << i << "][" << j << "]" << endl;
        while (plansza[i][j] != 0) 
        {
            i = distributor10(generator);
            j = distributor10(generator);
            cout << "sprawdzam czy wolne pole [" << i << "][" << j << "]" << endl;
        }
        cout << "pozycja wolna [" << i << "][" << j << "]" << endl;

        czyPuste = true;

        int l{};
        int tabKierunki[4]{};
        while (czyKierunku == false && l < 4)
        { 

            while (tabKierunki[k] != 0) 
            {
                k = distributor4(generator);
            }
            cout << "sprawdzam kierunek " << k << endl;

            if (k == 0) 
            {
                tabKierunki[k] = 1;
                if (i - dl + 1 >= 0)
                { 
                    int x = 1;
                    for (x = 1; x < dl; x++) 
                    {
                        if (plansza[i - x][j] == 0) 
                        {
                            
                        }
                        else 
                        {
                            cout << "kieruek: " << k << " nie wejdzie" << endl;
                            break;
                        }
                    }

                    if (x == dl)
                    { 
                        czyKierunku = true;
                    }
                }
                else 
                {
                    cout << "kieruek: " << k << " wgl nie wejdzie" << endl;
                    break;
                }
            }
            if (k == 1)
            { 
                tabKierunki[k] = 1; 
                if (j + dl - 1 <= 9)
                { 
                    int x = 1;
                    for (x = 1; x < dl; x++) 
                    {
                        if (plansza[i][j + x] == 0) 
                        {
                            
                        }
                        else {
                            cout << "kieruek: " << k << " nie wejdzie" << endl;
                            break;
                        }
                    }

                    if (x == dl) 
                    {
                        czyKierunku = true;
                    }
                }
                else 
                {
                    cout << "kieruek: " << k << " wgl nie wejdzie" << endl;
                    break;
                }
            }
            if (k == 2) 
            {
                tabKierunki[k] = 1; 
                if (i + dl - 1 <= 9) 
                { 
                    int x = 1;
                    for (x = 1; x < dl; x++)
                    {
                        if (plansza[i + x][j] == 0) 
                        {
                        }
                        else 
                        {
                            cout << "kieruek: " << k << " nie wejdzie" << endl;
                            break;
                        }
                    }

                    if (x == dl) 
                    {
                        czyKierunku = true;
                    }
                }
                else 
                {
                    cout << "kieruek: " << k << " wgl nie wejdzie" << endl;
                    break;
                }
            }
            if (k == 3) 
            { 
                tabKierunki[k] = 1; 
                if (j - dl + 1 >= 0) 
                {
                    int x = 1;
                    for (x = 1; x < dl; x++) 
                    {
                        if (plansza[i][j - x] == 0) 
                        {
                        }
                        else 
                        {
                            cout << "kieruek: " << k << " nie wejdzie" << endl;
                            break;
                        }
                    }

                    if (x == dl) 
                    {
                        czyKierunku = true;
                    }
                }
                else 
                {
                    cout << "kieruek: " << k << " wgl nie wejdzie" << endl;
                    break;
                }
            }

            l++;

        }



        if (czyPuste && czyKierunku) {
            bigbool = true;
        }
        else {
            i = distributor10(generator);
            j = distributor10(generator);
            k = distributor4(generator);
        }

        czyPuste = false;
        czyKierunku = false;
    }

    cout << "kierunek: " << k << " - OK ";
    cout << "ustawianie " << dl << "' [" << i << "][" << j << "] k: " << k << endl;

    for (int ii = 0; ii < dl; ii++) {

        if (dl == 1) {
            plansza[i][j] = dl;
            cout << "[ustawiam " << i - ii << ":" << j << "]" << endl;
            plansza[i - 1][j] = 9;
            if (j + 1 <= 9)plansza[i - 1][j + 1] = 9;
            if (j + 1 <= 9)plansza[i][j + 1] = 9;
            if (j + 1 <= 9)plansza[i + 1][j + 1] = 9;
            plansza[i + 1][j] = 9;
            if (j - 1 >= 0)plansza[i + 1][j - 1] = 9;
            if (j - 1 >= 0)plansza[i][j - 1] = 9;
            if (j - 1 >= 0)plansza[i - 1][j - 1] = 9;
        }
        else 
        {
            if (k == 0) 
            {
                plansza[i - ii][j] = dl;
                cout << "[ustawiam " << i - ii << ":" << j << "]" << endl;
                if (ii == 0)
                {
                    if (j - 1 >= 0)plansza[i - ii][j - 1] = 9;
                    if (j + 1 <= 9)plansza[i - ii][j + 1] = 9;
                    if (j - 1 >= 0)plansza[i - ii + 1][j - 1] = 9;
                    plansza[i - ii + 1][j] = 9;
                    if (j + 1 <= 9)plansza[i - ii + 1][j + 1] = 9;
                }
                else if (ii == dl - 1) 
                {
                    if (j - 1 >= 0)plansza[i - ii][j - 1] = 9;
                    if (j + 1 <= 9)plansza[i - ii][j + 1] = 9;
                    if (j - 1 >= 0)plansza[i - ii - 1][j - 1] = 9;
                    plansza[i - ii - 1][j] = 9;
                    if (j + 1 <= 9)plansza[i - ii - 1][j + 1] = 9;
                }
                else 
                {
                    if (j - 1 >= 0)plansza[i - ii][j - 1] = 9;
                    if (j + 1 <= 9)plansza[i - ii][j + 1] = 9;
                }
            }
            if (k == 1) 
            {
                plansza[i][j + ii] = dl;
                cout << "[ustawiam " << i << ":" << j + ii << "]" << endl;
                if (ii == 0) {
                    if (j + ii <= 9)plansza[i - 1][j + ii] = 9;
                    if (j + ii <= 9)plansza[i + 1][j + ii] = 9;
                    if (j + ii - 1 >= 0)plansza[i][j + ii - 1] = 9;
                    if (j + ii - 1 >= 0)plansza[i - 1][j + ii - 1] = 9;
                    if (j + ii - 1 >= 0)plansza[i + 1][j + ii - 1] = 9;
                }
                else if (ii == dl - 1) {
                    plansza[i - 1][j + ii] = 9;
                    plansza[i + 1][j + ii] = 9;
                    if (j + ii + 1 <= 9)plansza[i][j + ii + 1] = 9;
                    if (j + ii + 1 <= 9)plansza[i - 1][j + ii + 1] = 9;
                    if (j + ii + 1 <= 9)plansza[i + 1][j + ii + 1] = 9;
                }
                else 
                {
                    plansza[i + 1][j + ii] = 9;
                    plansza[i - 1][j + ii] = 9;
                }
            }
            if (k == 2) 
            {
                plansza[i + ii][j] = dl;
                cout << "[ustawiam " << i + ii << ":" << j << "]" << endl;
                if (ii == 0) 
                {
                    if (j - 1 >= 0)plansza[i + ii][j - 1] = 9;
                    if (j + 1 <= 9)plansza[i + ii][j + 1] = 9;
                    if (j - 1 >= 0)plansza[i + ii - 1][j - 1] = 9;
                    plansza[i + ii - 1][j] = 9;
                    if (j + 1 <= 9)plansza[i + ii - 1][j + 1] = 9;
                }
                else if (ii == dl - 1) 
                {
                    if (j - 1 >= 0)plansza[i + ii][j - 1] = 9;
                    if (j + 1 <= 9)plansza[i + ii][j + 1] = 9;
                    if (j - 1 >= 0)plansza[i + ii + 1][j - 1] = 9;
                    plansza[i + ii + 1][j] = 9;
                    if (j + 1 <= 9)plansza[i + ii + 1][j + 1] = 9;
                }
                else 
                {
                    if (j - 1 >= 0)plansza[i + ii][j - 1] = 9;
                    if (j + 1 <= 9)plansza[i + ii][j + 1] = 9;
                }
            }
            if (k == 3) 
            {
                plansza[i][j - ii] = dl;
                cout << "[ustawiam " << i << ":" << j - ii << "]" << endl;
                if (ii == 0) 
                {
                    plansza[i + 1][j - ii] = 9;
                    plansza[i - 1][j - ii] = 9;
                    if (j - ii + 1 <= 9)plansza[i][j - ii + 1] = 9;
                    if (j - ii + 1 <= 9)plansza[i - 1][j - ii + 1] = 9;
                    if (j - ii + 1 <= 9)plansza[i + 1][j - ii + 1] = 9;
                }
                else if (ii == dl - 1) 
                {
                    plansza[i + 1][j - ii] = 9;
                    plansza[i - 1][j - ii] = 9;
                    if (j - ii - 1 >= 0)plansza[i][j - ii - 1] = 9;
                    if (j - ii - 1 >= 0)plansza[i - 1][j - ii - 1] = 9;
                    if (j - ii - 1 >= 0)plansza[i + 1][j - ii - 1] = 9;
                }
                else 
                {
                    plansza[i + 1][j - ii] = 9;
                    plansza[i - 1][j - ii] = 9;
                }
            }

        }


    }

    cout << "- ustawiono" << endl;
    Save_Computer(plansza);
    cout << "DALEJ";
    cin.get();
}