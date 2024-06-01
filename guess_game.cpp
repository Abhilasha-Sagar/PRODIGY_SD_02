#include <iostream>
#include <cstdlib> 

using namespace std;

int main(){
    int random = rand()%10 + 1;
    int attempt = 0, guess;

    cout << "Enter a number: ";
    cin >> guess;

    while(guess != random){
        if(guess > random){
            attempt++;
            cout << "Number is too large. Enter a smaller number." << endl;
            cout << "Enter a number: ";
            cin >> guess;
        }
        else if(guess < random){
            attempt++;
            cout << "Number is too small. Enter a larger number." << endl;
            cout << "Enter a number: ";
            cin >> guess;
        }
    }

    cout << "You guessed it right!" << endl << "The number is " << random << ". Number of attempts: " << attempt;

    return 0;
}