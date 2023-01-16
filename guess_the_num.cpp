#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
using namespace std;

int main() {
    srand(time(0));
    int randomNum = rand() % 100 + 1,  guess;
    char c = 'Y';

    while (c == 'Y' || c == 'y') {
        cout << "Guess a number between 1 and 100: ";
        cin >> guess;

        if (guess == randomNum) {
            cout << "Correct!" << endl;
            break;
        } else if (abs(guess - randomNum) <= 5) {
            cout << "Nearly there!" << endl;
        } else {
            cout << "Try again." << endl;
        }

        if (getch() == 27) { // 27 is the ASCII value of the ESC key
            cout << "Do you wish to continue guessing? (Y/N) ";
            cin >> c;
        }
    }
    return 0;
}
