#include <iostream>
#include <string>

using namespace std;

void showMessage(string message);
int sum(int numbers[]);

int main() {
    int numbers[] = {10, 10};

    showMessage("10 + 10 = ");
    cout << sum(numbers);

    return 0;
}

void showMessage(string message) {
    cout << message;
}

int sum(int numbers[]) {
    int totalSum = 0;
    for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++) {
        totalSum += numbers[i];
    }

    return totalSum;
}
