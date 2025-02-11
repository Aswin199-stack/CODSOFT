#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {

    srand(time(0));
    int target_number = rand() % 100 + 1;
    int guess;

    cout << "Guess the number between 1 and 100: ";

    do {
        cin >> guess;

        if (guess < target_number) {
             cout << "Too low! Try again: ";
        } else if (guess > target_number) {
             cout << "Too high! Try again: ";
        }

    } while (guess != target_number);

            cout << "Congratulations! You have guessed the correct number!" << std::endl;

    return 0;
}

