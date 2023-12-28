#include <iostream>

using namespace std;

int sumOfTwoValues(int n1, int n2);

int sumOfTwoValues();

int main() {

    int result = sumOfTwoValues(10, 4);

    cout << "Result of a sum: " << result;

return 0;
}

int sumOfTwoValues(int n1, int n2) {
    return n1 + n2;
}

int sumOfTwoValues() {

    int n1, n2;

    cout << "Insert a value to number1:\n";
    cin >> n1;
    cout << "Insert a value to number2:\n";
    cin >> n2;

    return n1 + n2;
}
