#include <iostream>
#include <cstdlib>
#include <unordered_map>
#include <iomanip>

using namespace std;

void calculateChange(double change, double avaibleNotesAndCoins[], int length);

int main() {

    double valueToPay, payment, change;

    double avaibleNotesAndCoins[] = {100, 50, 20, 10, 5, 2, 1, 0.5, 0.25};
     int length = sizeof(avaibleNotesAndCoins) / sizeof(avaibleNotesAndCoins[0]);

    cout << "Digit the purchase price: ";
    cin >> valueToPay;
    cout << "Digite the paid amount: ";
    cin >> payment;

    if (payment == valueToPay) cout << "No need change.";
    
    else if (payment < valueToPay) cout << "Client need pay more " << std::fixed << std::setprecision(2) << valueToPay - payment;
    
    else {
        change = payment - valueToPay;
        calculateChange(change, avaibleNotesAndCoins, length);
    }


    return 0;
}

void calculateChange(double change, double avaibleNotesAndCoins[], int length) {

    unordered_map<double, int> result;

    for (int i = 0; i < length; i++) {
        double noteOrCoin = avaibleNotesAndCoins[i];
        int quantityOfThisNoteCoin = change / noteOrCoin;
        result[noteOrCoin] = quantityOfThisNoteCoin;
        change -= noteOrCoin * quantityOfThisNoteCoin;
    }

    cout << "Change to be given: \n";

    for (auto& pair: result) {
        if (pair.second > 0) cout << pair.second << " notes or coins of: " << pair.first << " dollar" << endl;
    }
}
