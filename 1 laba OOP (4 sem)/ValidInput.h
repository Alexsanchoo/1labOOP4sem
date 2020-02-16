#pragma once
#include<iostream>
#include<string>
#include<conio.h>
#include<regex>

using namespace std;

template<class T>
class ValidInput
{
public:
	/*int, char, double, bool*/
	static T getValidValue(string messageOfError)
	{
		T value;
		cin >> value;
		while (cin.fail() || cin.get() != '\n')
		{
			cout << messageOfError;
			cin.clear();
			rewind(stdin);
			cin >> value;
		}
		return value;
	}

	static string getInitials(string messageOfError);
	static string getString(string messageOfError);
};


