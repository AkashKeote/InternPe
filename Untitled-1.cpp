#include <iostream>
#include <cstdlib> // Include the necessary header for random number generation
using namespace std;

class Guesser {
private:
    int number;
    int pick;

public:
    Guesser(int n, int p) {
        number = n;
        pick = p;
    }

    int higherlower(int num) {
        if (pick > num) {
            cout << "Guess Lower" << endl;
            return -1;
        } else if (pick < num) {
            cout << "Guess Higher" << endl;
            return 1;
        } else {
            cout << "You Won" << endl;
            return 0;
        }
    }
};

int main() {
    // Generate a random number between 1 and 100 (inclusive)
    int n = rand() % 100 + 1;

    int p;
    cout << "Enter Your Guess (1-100): ";
    cin >> p;

    Guesser gameInstance(n, p);
    gameInstance.higherlower(100); // Set the upper bound for guessing (you can adjust this)

    return 0;
}
