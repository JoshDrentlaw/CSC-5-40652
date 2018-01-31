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

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

/*
 * Mastermind
 */
int main(int argc, char** argv) {
    /*
     * Declare and initialize variables
     */
    
    // Player variables
    bool p1, p2 = false;
    
    int humans = 0;
    
    int maker = 1;
    int breaker = 2;
    
    int p1Wins = 0;
    int p2Wins = 0;
    
    int p1Pts = 0;
    int p2Pts = 0;
    
    // Game variables
    const int GUESSES = 12;
    
    int matches = 0;
    bool inCode = false;
    char a;
    string code, guess, hints, chkHint;
    
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
    
    // Validate # of human players
    do {
        cout << "Enter number of human players (1 or 2): ";
        cin >> humans;
    } while (humans < 0 || humans > 2);
    
    // Play with the computer
    if (humans == 1) {
        
    }
    // Play against a friend
    else if (humans == 2) {
        // Validate # of matches
        do {
            cout << "Enter an even number of matches: ";
            cin >> matches;
        } while (matches > 0 && matches % 2 == 1);
        
        while (matches > 0) {
            bool notVal = false;
            // Player 1 is The Maker
            if (maker == 1) {
                // Validate code
                do {
                    cout << "Player 2, TURN AROUND!! NO PEAKING!!" << endl;
                    cout << "Player 1 is Code Maker. Please enter a code so the Code Breaker can't see: ";
                    cin >> setw(4) >> code;

                    for (int i = 0; i < 4; i++) {
                        a = tolower(code[i]);
                        switch (a) {
                            case 98:
                                notVal = false;
                                break;
                            case 103:
                                notVal = false;
                                break;
                            case 111:
                                notVal = false;
                                break;
                            case 112:
                                notVal = false;
                                break;
                            case 114:
                                notVal = false;
                                break;
                            case 121:
                                notVal = false;
                                break;
                            default:
                                notVal = true;
                        }
                    }
                } while (notVal);
                
                
                cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
            }
            // Player 2 is The Maker
            else if (maker == 2) {
                // Validate code
                do {
                    cout << "Player 1, TURN AROUND!! NO PEAKING!!" << endl;
                    cout << "Player 2 is Code Maker. Please enter a code so the Code Breaker can't see: ";
                    cin >> setw(4) >> code;
                    
                    for (int i = 0; i < 4; i++) {
                        a = tolower(code[i]);
                        switch (a) {
                            case 98:
                                notVal = false;
                                break;
                            case 103:
                                notVal = false;
                                break;
                            case 111:
                                notVal = false;
                                break;
                            case 112:
                                notVal = false;
                                break;
                            case 114:
                                notVal = false;
                                break;
                            case 121:
                                notVal = false;
                                break;
                            default:
                                notVal = true;
                        }
                    }
                } while (notVal);
                
                
                cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
            }
            
            // Guessing begins
            cout << "Start guessing!" << endl;
            
            // The Breaker will have 12 attempts at guessing the code
            for (int i = 0; i < GUESSES; i++) {
                guess, hints, chkHint = "";
                cout << "Guess " << i+1 << ":" << endl;
                cin.ignore();
                getline(cin, guess);
                
                // Compare guess to code. With 2 human players, this is to keep The Maker honest!
                for (int i = 0; i < 4; i++) {
                    for (int j = 0; j < 4; j++) {
                        inCode = false;
                        if (code[i] == guess[j]) {
                            if (i == j) {
                                chkHint += "X";
                                cout << "X";
                                inCode = true;
                            }
                            else {
                                chkHint += "O";
                                cout << "O";
                                inCode = true;
                            }
                        }
                    }
                    if (inCode) {
                        chkHint += " ";
                        cout << " ";
                    }
                }
                cin.ignore();
                getline(cin, hints);
                
                if (hints != chkHint) {
                    cout << "The Maker isn't being honest..." << endl;
                    cout << "Actual hint: " << chkHint << endl;
                }
            }
        }
    }

    return 0;
}

