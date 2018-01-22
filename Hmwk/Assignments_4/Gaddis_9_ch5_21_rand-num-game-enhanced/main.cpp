/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh
 *
 * Created on January 21, 2018, 8:14 PM
 */

#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    // Declare variables
    int guess, randNum, guesses;
    bool play = true;
    
    // Let user play multiple times
    while (play) {
        // Initialize variables
        srand(time(0));
        randNum = (rand() % 100) + 1;
        guesses = 0;
        
        cout << "Welcome to the Random number guessing game!!\n"
            << "All you need to do is enter a positive integer between 1 and 100.\n\n";
        
        // Run game
        while (guess != randNum) {
            cout << "Guess the random number: ";
            cin >> guess;
            
            // Guess was too high
            if (guess > randNum) {
                cout << "Too high, try again.\n";
                guesses++;
            }
            // Guess was too low
            else if (guess < randNum) {
                cout << "Too low, try again.\n";
                guesses++;
            }
            // Guess was just right
            else {
                guesses++;
                cout << "You did it! Good job!\n"
                        << "The number was " << randNum << ", and it took " << guesses << " guesses.\n";
            }
        }
        
        cout << "Play again? (1/0) ";
        cin >> play;
    }    

    return 0;
}

