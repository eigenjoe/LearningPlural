#include <iostream>


using std::cout;
using std::cin;
using std::string;

// Guess my number game

int main() {

    int secretNumber = 3;
    int answer;
    bool keepPlaying = true;
    string keepPlayingRes = "yes";

    while (keepPlaying) {
        while (1) {
            cout << "Guess a number from 1 to 10: ";
            cin >> answer;

            if (answer > secretNumber) {
                cout << "Your number is too high!" << std::endl;
            }
            if (answer < secretNumber) {
                cout << "Your number is too low!" << std::endl;
            }
            if (answer == secretNumber) {
                cout << "You guessed it right! You are a magician!" << std::endl;
                break;
            }
        }
        cout << "Do you want to play again? (yes/no)";
        cin >> keepPlayingRes;
        if (keepPlayingRes == "no") {
            keepPlaying = false;
        }

    }
    return 0;
}
