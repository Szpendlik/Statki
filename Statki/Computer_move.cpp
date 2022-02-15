#include <iostream>
#include <random>
#include <fstream>
#include <ctime>

using namespace std;

void Computer_move(char tab[10][10], bool wynik)
{
	int x, y, z = 0;

	mt19937 generator(time(nullptr));
	uniform_int_distribution<int> distributor10(0, 9);

	x = distributor10(generator);
	y = distributor10(generator);

	if (tab[y - 1][x - 1] == '1')
	{
		cout << "Trafiony zatopiony " << endl;
		z++;
	}
	else if (tab[y - 1][x - 1] == '2')
	{
		if (tab[y][x + 1] == '2')
		{
			cout << "Trafiony " << endl;
		}
		else if (tab[y + 1][x + 1] == '2')
		{
			cout << "Trafiony " << endl;
		}
		else if (tab[y - 1][x + 1] == '2')
		{
			cout << "Trafiony " << endl;
		}
		else if (tab[y - 1][x] == '2')
		{
			cout << "Trafiony " << endl;
		}
		else if (tab[y - 1][x - 1] == '2')
		{
			cout << "Trafiony " << endl;
		}
		else if (tab[y][x - 1] == '2')
		{
			cout << "Trafiony " << endl;
		}
		else if (tab[y + 1][x - 1] == '2')
		{
			cout << "Trafiony " << endl;
		}
		else if (tab[y + 1][x] == '2')
		{
			cout << "Trafiony " << endl;
		}
		else
		{
			cout << "Trafiony zatopiony" << endl;
			z++;
		}

	}
	else if (tab[y - 1][x - 1] == '3')
	{
		if (tab[y + 1][x + 1] == '3')
		{
			cout << "Trafiony " << endl;
		}
		else if (tab[y][x + 1] == '3')
		{
			cout << "Trafiony " << endl;
		}
		else if (tab[y - 1][x + 1] == '3')
		{
			cout << "Trafiony " << endl;
		}
		else if (tab[y - 1][x] == '3')
		{
			cout << "Trafiony " << endl;
		}
		else if (tab[y - 1][x - 1] == '3')
		{
			cout << "Trafiony " << endl;
		}
		else if (tab[y][x - 1] == '3')
		{
			cout << "Trafiony " << endl;
		}
		else if (tab[y + 1][x - 1] == '3')
		{
			cout << "Trafiony " << endl;
		}
		else if (tab[y + 1][x] == '3')
		{
			cout << "Trafiony " << endl;
		}
		else
		{
			cout << "Trafiony zatopiony" << endl;
			z++;
		}

	}
	else if (tab[y - 1][x - 1] == '4')
	{
		if (tab[y + 1][x + 1] == '4')
		{
			cout << "Trafiony " << endl;
		}
		else if (tab[y][x + 1] == '4')
		{
			cout << "Trafiony " << endl;
		}
		else if (tab[y - 1][x + 1] == '4')
		{
			cout << "Trafiony " << endl;
		}
		else if (tab[y - 1][x] == '4')
		{
			cout << "Trafiony " << endl;
		}
		else if (tab[y - 1][x - 1] == '4')
		{
			cout << "Trafiony " << endl;
		}
		else if (tab[y][x - 1] == '4')
		{
			cout << "Trafiony " << endl;
		}
		else if (tab[y + 1][x - 1] == '4')
		{
			cout << "Trafiony " << endl;
		}
		else if (tab[y + 1][x] == '4')
		{
			cout << "Trafiony " << endl;
		}
		else
		{
			cout << "Trafiony zatopiony" << endl;
			z++;
		}
	}
	else cout << "pudlo" << endl;

	system("cls");

	if (z == 10)
	{
		cout << "Wygrales!!!";
		wynik = false;
	}
}