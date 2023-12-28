#include <iostream>

using namespace std;

static void sum() {
	int value = 0, aValue, numberToSum;

	cout << "How much numbers do you want sum?\n";
	cin >> numberToSum;

	for (int i = 0; i < numberToSum; i++)
	{
		cout << "Enter a number to sum:\n";
		cin >> aValue;
		value += aValue;
	}

	cout << "Result: " << value;

	return;
}