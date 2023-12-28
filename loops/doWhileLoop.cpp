#include <iostream>

using namespace std;

static void doWhile() {
    int i = 1;

    do {
        cout << "Value of i: " << i << std::endl;
        i++;
    } while (i <= 5);

}
