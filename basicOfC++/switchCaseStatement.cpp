#include <iostream>

using namespace std;

static void swithCase() {
	string message;
	char digit;

	cout << "Menu of messages: \n\n";
	cout << "1- Hello World\n2- Good morning\n3- Bye bye!\n";
	cin >> digit;
	switch (digit) {
		case '1' or '2':
			cout << "Hello World";
			break;
		case '2':
			cout << "Good morning";
			break;
		case '3':
			cout << "Bye bye!";
			break;
		default:
			cout << "Invalid digit. Avaible digits: 1, 2 or 3";
	}

}