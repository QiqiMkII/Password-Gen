// Kouta's code.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"
using namespace std;

int main()
{
	int x;
	int y;
	cout << endl << "Choose and enter what you want to calculate." << endl;
	cout << endl << "A. Surface area for sphere" << endl;
	cout << "B. Volume for sphere" << endl << endl;
	string ch;
	cin >> ch;
	if (ch == "A") cout << endl << "Enter your radius." << endl;
	else
		cin >> x;
	if (ch == "B") cout << endl << "Enter your radiues." << endl;
	else
		cin >> x;
	if (ch == "A") cout << (4 * 3.14 * x * x) << endl;
	if (ch == "B") cout << (1.33 * 3.14 * x * x * x) << endl << endl;
	cin >> y;
	cout << y << endl;
}
