#include <iostream>

using namespace std;

static int variable1; // Global variable

static void globalAndLocalVariables() {
	int variable2 = 0; // Local variable

	int n1 = 5, n2 = 6, n3 = 7, n4 = 8, n5 = 9, n6 = 10;

	int multiplication = n1 * n3;
	int division = n6 / n2;
	int subtraction = n5 - n4;

	cout << "Division: " << n6 << " / " << n2 << endl;
	cout << "Round result of division: " << division << endl;
	cout << "Rest of division: " << (n6 % n2);
}
