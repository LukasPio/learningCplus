#include <iostream>

using namespace std;

int main() {
	int numbers[] = { 24, 61, 12, 6, 12};
	int numbersLength = sizeof(numbers) / sizeof(numbers[0]);
	for (int i = 0; i < numbersLength; i++) {
		cout << "Value in position: " << i << ": " << numbers[i] << endl;
	}
	return 0;
}
