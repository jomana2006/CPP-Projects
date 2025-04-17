#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int choice;
void displaychoices() {
    cout << "Here are your choices!" << endl;
    cout << " 1. Rock \n 2. Paper \n 3. Scissor" << endl;
}
int getplayerchoice() {
    cout << "Make your choice: " << endl;
    cin >> choice;
    if (choice < 1  || choice > 3) {
        cout << "Invalid Choice.";
        cin >> choice;
    }
    return choice;
}
int getcomputerchoice() {
    return rand() % 3 + 1;
}
void winner(int playerchoice, int computerchoice) {
    string choices[] = { "Rock", "Paper", "Scissor" };
    cout << "The player's choice :" << choices[playerchoice - 1] << endl;
    if (playerchoice == computerchoice)
        cout << "It is a draw." << endl;
    else if ((playerchoice == 1 && computerchoice == 3) || (playerchoice == 2 && computerchoice == 1) || (playerchoice == 3 && computerchoice == 2))
        cout << "You are the winner.";
    else
        cout << "The computer wins.";
}
int main() {
    srand(time(0));
    cout << "Welcome to the RocK, Paper, Scissor! Game." << endl;
    displaychoices();
    int playerchoice = getplayerchoice();
    int computerchoice = getcomputerchoice();
    cout << "The computer's choice is: " << computerchoice << endl;
    winner(playerchoice, computerchoice);
    return 0;
}