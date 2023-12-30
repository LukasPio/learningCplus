#include <iostream>
#include <list>

using namespace std;

int main() {

    list<int> episodes;    
    int episodesLength = 10;

    episodes.push_front(4);
    episodes.push_front(7);
    episodes.push_front(1);
    episodes.push_front(9);
    episodes.push_front(8);
    episodes.push_front(3);
    episodes.push_front(6);
    episodes.push_front(2);
    episodes.push_front(5);
    episodes.push_front(10);

    cout << "List size: " << episodes.size() << endl;

    episodes.sort();
    episodes.reverse();

    for (int i = 0; i < episodesLength; i++) {
        cout << "Episode " << episodes.back() << endl;
        episodes.pop_back();
    }

    return 0;
}