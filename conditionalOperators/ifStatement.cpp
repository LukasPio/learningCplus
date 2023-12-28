#include <iostream>

using namespace std;

static void ifStatement() {
	int age;
	cout << "Enter your age:\n";
	cin >> age;

	if (age >= 18) {
		cout << "You can drive";
		return;
	}

	if (age <= 0) {
		cout << "You not was born yet :0";
		return;
	}

	cout << "You can't drive";
}
