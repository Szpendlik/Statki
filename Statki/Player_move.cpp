#include <iostream>

using namespace std;

void Player_move(char tab[10][10], bool wynik)
{
	int x = 0, y = 0, z = 0;

	cout << "Podaj pozycje x: " << endl;
	cin >> x;
	cout << "Podaj pozycje y: " << endl;
	cin >> y;

	if (tab[y-1][x-1] == '1') 
	{
		cout << "Trafiony zatopiony " << endl;
		z++;
	}
	else if (tab[y-1][x-1] == '2')
	{
		if (tab[y][x+1] == '2')
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
	else if (tab[y-1][x-1] == '3')
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
			cout << "Trafiony "<< endl;
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
	else if (tab[y-1][x-1] == '4')
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