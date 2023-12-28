#include <iostream>

using namespace std;

static void breakStatement() {
	int index = 0;
	char toCancel;

	while (index < 100) {
		cout << "index: " << index << endl;
		index++;
		cout << "Want break the loop? (S/N)\n";
		cin >> toCancel;
		if (toCancel == 'S' or toCancel == 's') break;
	}

	cout << "Loop was interrupted o finished.";
}