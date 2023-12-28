#include <iostream>
#include <string.h>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[]) {

    string biggerArgument = "";

    for (int i = 0; i < argc; i++) {
        cout << "Argument in position " << i << ": " << argv[i] << endl;
        if (biggerArgument.length() < strlen(argv[i])) {
            biggerArgument = string(argv[i]);
        }
    }

    cout << "Bigger argument that was provided: " << biggerArgument;

    system("pause");

return 0;
}

/*
OUTPUT:
...\argumentsToMainFunction>main lucas pio almeida galvao
Argument in position 0: main
Argument in position 1: lucas
Argument in position 2: pio
Argument in position 3: almeida
Argument in position 4: galvao
Bigger argument that was provided: almeida
*/
