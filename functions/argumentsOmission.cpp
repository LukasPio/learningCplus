#include <iostream>

using namespace std;

string showMessage(string message, string reciever="");

int main() {

    // string messageToBeShown = showMessage("Hello World ", "John"); Hello World John
    string messageToBeShown = showMessage("Hello World"); // Hello World.
    cout << messageToBeShown;

    return 0;
}

string showMessage(string message, string reciever) {
    return message + reciever + '!';
}
