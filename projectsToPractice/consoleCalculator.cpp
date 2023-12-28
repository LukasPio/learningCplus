#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

static void showResult(int result, string operation) {
	cout << "Result of the " + operation + ": " + to_string(result) << endl;
}

static void sum(int quantityNumbersToSum) {
	int result = 0, aNumber;
	for (int i = 0; i < quantityNumbersToSum; i++) {
		cout << "Enter a number to sum\n";
		cin >> aNumber;
		result += aNumber;
	}
	showResult(result, "sum");
}

static void subtract(int quantityNumbersToSubtract) {
	int result = 0, aNumber;
	for (int i = 0; i < quantityNumbersToSubtract; i++) {
		cout << "Enter a number to subtract\n";
		cin >> aNumber;
		result += -aNumber;
	}
	showResult(result, "subtraction");
}

static void multiplication(int quantityNumbersToMultiplication) {
	int result = 1, aNumber;
	for (int i = 0; i < quantityNumbersToMultiplication; i++) {
		cout << "Enter a number to multiplicate\n";
		cin >> aNumber;
		result *= aNumber;
	}
	showResult(result, "multiplication");
}
static void division(int quantityNumbersToDivide) {
	int result = 0, aNumber;
	for (int i = 0; i < quantityNumbersToDivide; i++) {
		cout << "Enter a number to divide\n";
		cin >> aNumber;
		if (result == 0) result += aNumber;
		else result /= aNumber;
	}
	showResult(result, "division");
}

static void calculator() {

	int option = 0, quantityNumbers = 0;

	do {
		system("cls");

		cout << "Choose an option:\n1- Sum\n2- Subtraction\n3- Multiplication\n4- Division\n5- Quit\n\n";
		cin >> option;

		if (option >= 1 && option <= 4) {
			cout << "How many numbers do you want to enter?\n";
			cin >> quantityNumbers;
		}

		switch (option) {
		case 1: sum(quantityNumbers); break;
		case 2: subtract(quantityNumbers); break;
		case 3: multiplication(quantityNumbers); break;
		case 4: division(quantityNumbers); break;
		case 5: cout << "Ending program...\n"; break;
		default: 
			cout << "Invalid option!\n";
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}

		system("pause");

	} while (option != 5);
}
