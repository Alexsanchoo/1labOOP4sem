#include "ValidInput.h"

string ValidInput<string>::getInitials(string messageOfError)
{
	string validStr;
	bool isValid = false;
	while (!isValid)
	{
		getline(cin, validStr);
		isValid = regex_match(validStr, regex("[A-ZÀ-ß¨][a-zà-ÿ¸]+"));
		if (!isValid)
		{
			cout << messageOfError;
		}
	}
	return validStr;
}

string ValidInput<string>::getString(string messageOfError)
{
	string validStr;
	bool isValid = false;
	while (!isValid)
	{
		getline(cin, validStr);
		isValid = regex_match(validStr, regex("[À-ßà-ÿA-Za-z¨¸\\-\\ ]+"));
		if (!isValid)
		{
			cout << messageOfError;
		}
	}
	return validStr;
}
