#include <iostream>
#include <cstdlib> 
using namespace std;

void Game(int number) {
    int guess = 0;
    while (guess != number) {
        cout << "Enter Guess (1-100): ";
        cin >> guess;
        if (guess > number) {
            cout << "Guess Higher" << endl;
        } else if (guess < number) {
            cout << "Guess Lower" << endl;
        } else {
            cout << "You Won" << endl;
        }
    }
}

int main() {
  
    int n = rand() % 100 + 1; 
    Game(n);
    return 0;
}
