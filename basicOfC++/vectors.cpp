#include <iostream>

using namespace std;

static void vectors() {

	int numbers[10] = {}, aNumber;
	int arraySize = sizeof(numbers) / 4;

	for (int i = 0; i < arraySize; i++) {
		cout << "Enter a value to position " << i << ":\n";
		cin >> aNumber;
		numbers[i] = aNumber;
	}

	cout << "-----------------------------------" << endl;

	for (int i = 0; i < arraySize; i++) {
		cout << "Value in position " << i << ": " << numbers[i] << endl;
	}
}