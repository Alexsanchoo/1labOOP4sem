#include "ValidInput.h"

string ValidInput<string>::getInitials(string messageOfError)
{
	string validStr;
	bool isValid = false;
	while (!isValid)
	{
		getline(cin, validStr);
		isValid = regex_match(validStr, regex("[A-Z�-ߨ][a-z�-��]+"));
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
		isValid = regex_match(validStr, regex("[�-��-�A-Za-z��\\-\\ ]+"));
		if (!isValid)
		{
			cout << messageOfError;
		}
	}
	return validStr;
}
