#include <iostream>
using namespace std;

static void variableSwap() {
	int n1 = 10;
	int n2 = 25;
	cout << "n1: " << n1 << ", n2: " << n2 << endl;
	int aux = n1;
	n1 = n2;
	n2 = aux;
	cout << "n1: " << n1 << ", n2: " << n2;
}