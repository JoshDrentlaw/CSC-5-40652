/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh
 *
 * Created on January 30, 2018, 4:30 AM
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

/*
 * Mastermind
 */
int main(int argc, char** argv) {
    /*
     * Declare and initialize variables
     */
    
    // Players
    bool p1, p2 = false;
    
    int maker = 1;
    int breaker = 2;
    
    // Game variables
    const int GUESSES = 12;
    
    int games;
    string code, guess;
    char hint1, hint2, hint3, hint4;
    
    cout << "Welcome to MASTERMIND! The game of code breaking!" << endl << endl;
    
    cout << "RULES OF THE GAME:" << endl;
    cout << "Valid colors: Red, Orange, Yellow, Green, Blue, Purple." << endl;
    cout << "Colors may be used multiple times." << endl;
    cout << "When entering the code and subsequent guesses, enter like so: royg" << endl;
    cout << "Use the first letter of the color, and do not separate with a space." << endl;
    cout << "After The Breaker has guessed, The Maker enters hints: O for correct color, and X for correct color and position." << endl;
    cout << "Enter nothing if the color is not in the code." << endl << endl;
    
    cout << "Example of a round when code is royg:" << endl;
    cout << "rybg" << endl;
    cout << "XO X" << endl << endl;
    
    cout << "The Breaker will have 12 tries to guess the code." << endl;
    cout << "Both players will agree on an even number of matches, and points are earned as The Maker at the end of each match." << endl;
    cout << "Players alternate between The Maker and Breaker roles." << endl;
    cout << "1 point is awarded for each incorrect guess made by The Breaker." << endl;
    cout << "An extra point is awarded if The Breaker does not guess correctly by the 12th round." << endl;
    cout << "The player with the most points at the end of the agreed upon matches wins!" << endl << endl;
    
    cout << "LET THE CODE BREAKING BEGIN!" << endl << endl;

    return 0;
}

