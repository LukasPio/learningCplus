#include <iostream>
#include <queue>

using namespace std;

int main () {

    queue <string> yugiohCards;

    if (yugiohCards.empty()) cout << "This deck is empty";
    else cout << "This deck has cards";

    cout << endl;

    yugiohCards.push("Blue eyes white dragon");
    yugiohCards.push("Dark magician");
    yugiohCards.push("Exodia the Forbidden One");
    yugiohCards.push("Pot of greed");

    cout << "Queue's size: " << yugiohCards.size() << endl;
    cout << "First card: " << yugiohCards.front() << endl;
    cout << "Last card: " << yugiohCards.back() << endl;

    cout << "------------------------------------------------\n";

    while (!yugiohCards.empty()) {
        cout << "First card: " << yugiohCards.front() << endl;
        yugiohCards.pop();
    }

    return 0;
}