#include <iostream>

using namespace std;

void countdown(int finalNumber, int counter = 0);
int factorial(int number);
int recursiveFibonacci(int number);

int main() {

    // countdown(100);
    // int result = factorial(5); cout << result;
    int result = recursiveFibonacci(6);
    cout << result;

    return 0;
}

void countdown(int finalNumber, int counter) {
        cout << counter << endl;
        if (finalNumber > counter) countdown(finalNumber, counter + 1);
}

int factorial(int number) {
    if (number == 0 || number == 1) return 1;
    return number * factorial(number - 1);
}

// 0, 1, 1, 2, 3, 5, 8, 13, 21

int recursiveFibonacci(int number) {
    if (number == 0 || number == 1) return number;
    return recursiveFibonacci(number - 1) + recursiveFibonacci(number - 2);
}
