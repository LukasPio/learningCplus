#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <string>

using namespace std;

int main () {

startOfProgram:

    int lifepoints = 0;
    string difficult;
    string wordsToGame[] = {
        "game", "programming", "algorithm",
        "developer", "software", "variable",
        "function", "keyboard", "mouse",
        "debugging", "compiler", "framework"
    };

    srand(static_cast<unsigned int>(time(0)));

    int quantityOfWords = sizeof(wordsToGame) / sizeof(wordsToGame[0]);
    int randomWordIndex = rand() % quantityOfWords;
    string word = wordsToGame[randomWordIndex];

    size_t wordLength = word.length();
    
    string wordToShow = "";

    for (size_t i = 0; i < wordLength; i++) {
        wordToShow += "_";
    }

    cout << "What difficulty do you want to play?\n1- Easy\n2- Medium\n3- Hard\n";
    cin >> difficult;

    if (difficult == "Easy" || difficult == "easy" || difficult == "1") lifepoints = 15;
    else if (difficult == "Medium" || difficult == "medium" || difficult == "2") lifepoints = 10;
    else if (difficult == "Hard" || difficult == "hard" || difficult == "3") lifepoints = 5;
    else {
        cout << "Invalid option.\n";
        system("pause");
        system("cls");
        goto startOfProgram;
    }

    cout << "You have: " << lifepoints << " lifepoints, good luck!\n";
    
    bool gameOver = false;
    bool userWon;
    char aChar;
    string lettersUsed = "";

    while (gameOver == false) {

        system("cls");

        cout << "*************************************" << endl << endl;
        cout << "Your lifepoints: " << lifepoints << endl;
        cout << "Word: " << wordToShow << endl;
        cout << "Letters used: " << lettersUsed << endl << endl;
        cout << "Try a letter!\n";
        cin >> aChar;

        aChar = tolower(aChar);

        if (lettersUsed.find(aChar) != string::npos) {
            cout << "You already used this char!\n";
            system("pause");
            continue;
        }

        if (word.find(aChar) == string::npos){
            lettersUsed += aChar;
            lifepoints--;
            if (lifepoints == 0) {
                userWon = false;
                gameOver = true;
                continue;
            }
            cout << "Wrong! try again.\n";
            system("pause");
            continue;
        }

        int positionOfCorrectChar = word.find(aChar);

        while (positionOfCorrectChar != string::npos) {
            wordToShow[positionOfCorrectChar] = aChar;
            positionOfCorrectChar = word.find(aChar, positionOfCorrectChar + 1);
        }

        lettersUsed += aChar;
        
        if (wordToShow.find('_') == string::npos) {
            userWon = true;
            gameOver = true;
        }
    }

    if (userWon) {
        cout << "*************************************" << endl << endl;

        cout << "Very Well, You won the game! :)\n";
        cout << "Your remaining lifepoints: " << lifepoints << endl;
        cout << "Word: " << wordToShow << endl;
        cout << "Letters used: " << lettersUsed << endl << endl;

    }
    else {
        cout << "*************************************" << endl << endl;

        cout << "It's a shame you lose, try again!\n";
        cout << "Your remaining lifepoints: " << lifepoints << endl;
        cout << "Correct word: " << word << endl;
        cout << "Your word: " << wordToShow << endl;
        cout << "Letters used: " << lettersUsed << endl << endl;

    }


    return 0;   
}