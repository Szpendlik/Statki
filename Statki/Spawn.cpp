#include <iostream>
#include <random>
#include <ctime>
#include "Nag³ówek.h"

using namespace std;

void Spawn()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << " 0 ";
		}
		cout << endl;
	}
	cout << endl;
	Set_Ships();
}