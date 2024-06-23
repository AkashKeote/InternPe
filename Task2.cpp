#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
  srand(static_cast<unsigned int>(time(0)));//random number generate karega through user ;
    int userChoose, compChoose, Rock, Paper, Scissor;
    Rock = 0;
    Paper = 1;
    Scissor = 2;

    cout << "Rock Paper Scissor Game" << endl;
    cout << "Enter Your Choice {0 Rock } {1 Paper} {2 Scissor}" << endl;
    cin >> userChoose;

    while (userChoose > 2) {
        cout << "Choose Between 0 and 2 Only !!!!" << endl << "Enter Again" << endl;
        cin >> userChoose;
    }

    compChoose = rand() % 3;// range hai 0 to 2 ke bich number generate krke dega

    if (userChoose == 0) {
        cout << "User Choose ROCK";
        if (compChoose == 0) {
            cout << "Comp Choose Rock" << endl;
            cout << "Match Ties";
        }
        else if (compChoose == 1) {
            cout << "Comp Choose Paper" << endl;
            cout << "Computer Won";
        }
        else if (compChoose == 2) {
            cout << "Comp Choose Scissor" << endl;
            cout << "User Won";
        }
    }
else if (userChoose == 1) {
    cout << "User Choose Paper"<<endl;
    if (compChoose == 0) {
        cout << "Comp Choose Rock" << endl;
        cout << "User Won";
    }
    else if (compChoose == 1) {
        cout << "Comp Choose Paper" << endl;
        cout << "Match Ties";
    }
    else if (compChoose == 2) {
        cout << "Comp Choose Scissor" << endl;
        cout << "Computer Won";
    }
}


    else {
        cout << "User Choose Scissor";
        if (compChoose == 0) {
            cout << "Comp Choose Rock" << endl;
            cout << "Computer Won";
        }
        else if (compChoose == 1) {
            cout << "Comp Choose Paper" << endl;
            cout << "User Won";
        }
        else if (compChoose == 2) {
            cout << "Comp Choose Scissor" << endl;
            cout << "Match Ties";
        }
    }

    return 0;
}
