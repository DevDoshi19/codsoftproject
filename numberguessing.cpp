#include <iostream>
#include <cstdlib>
#include <ctime>   
using namespace std;

int main() {
    srand(time(0)); 
    int rendomnumber = rand() % 100 + 1; 
    int guess;
    int attempts = 0;
    cout<<"---------------------------------------------------------------"<<endl;
    cout<<"Welcome to the Number Guessing Game!!!" << endl;
    cout<<"I have selected a number between 1 and 100. Can you guess it?"<<endl;
    cout<<"---------------------------------------------------------------"<<endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > rendomnumber) {
            cout << "Too high! Try again." << endl;
        } else if (guess < rendomnumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
        }
    } while (guess != rendomnumber);

    return 0;
}
