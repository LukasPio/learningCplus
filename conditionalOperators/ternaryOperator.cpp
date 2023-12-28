#include <iostream>

using namespace std;

static void ternaryOperator() {
	int note1, note2, average;
	string message;

	cout << "Enter the value of note1: ";
	cin >> note1;
	cout << "Enter the value of note2: ";
	cin >> note2;

	average = (note1 + note2) / 2;

	cout << "Student average: " << average << endl;

//	average >= 60 ? message = "approved" : message = "disapproved";

	message = average >= 60 ? "approved" : "disapproved";

	cout << "\nStudent situation: " << message << endl;
}