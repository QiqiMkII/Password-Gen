// All in one.cpp : Defines the entry point for the console application.
// This is all in one app that 

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int pass;
	int y;
	cout << "Welcome to my system"<<endl;
	cout << "How long do you want your password to be?(Enter digits)" << endl;
	cin >> y;
	for (int x = 1; x <= y; x++)
		cout << rand() % 9 + 1<<endl;
	cout << "Enter password :";
	cin >> pass;

}

