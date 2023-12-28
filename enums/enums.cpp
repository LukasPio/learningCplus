#include <iostream>

using namespace std;

int main() {

    enum Weapons {SHOTGUN=2, RIFLE=30, SNIPER=1, PISTOL=12};
    Weapons weaponChosen;
    
    weaponChosen = SNIPER;

    cout << weaponChosen;   

    return 0;
}