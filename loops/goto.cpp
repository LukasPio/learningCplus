3#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

	int notesQuantity = 0;
	double aNote, notesSum = 0;
	char userOption;

	start:

	system("cls");
	cout << "Enter a note: ";
	cin >> aNote;

	if (aNote < 0 or aNote > 100) {
		cout << "Invalid note! Notes must be between 0 and 100.\n";
		goto start;
	}

	notesSum += aNote;
	notesQuantity++;

	cout << "Press S to add more notes: ";
	cin >> userOption;

	if (userOption == 'S' or userOption == 's') {
		goto start;
	}

	double average = notesSum / notesQuantity;

	cout << "Student average: " << average << endl;

	if (average >= 60) cout << "This student is approved";

	else cout << "This student is disapproved";

    return 0;
}
