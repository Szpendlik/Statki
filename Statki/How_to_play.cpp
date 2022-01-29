#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <locale.h>

using namespace std;

void How_to_Play()
{
	fstream rules;
	rules.open("Rules.txt" , ios::in);

	string line;

	do 
	{
		getline(rules, line);
		cout << line << endl;

	} while (line != "");

	rules.close();
}