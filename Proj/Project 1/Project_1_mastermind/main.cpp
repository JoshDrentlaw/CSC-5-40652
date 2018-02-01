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
#include <fstream>

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
    int p1Total = 0;
    int p2Pts = 0;
    int p2Total = 0;
    
    // Game variables
    const int GUESSES = 12;
    
    char val = 0;
    bool notVal = false;
    
    int matches = 0;
    bool inCode = false;
    char codePc;
    string code, guess, hints, chkHint;
    ifstream codeDoc;
    
    cout << "Welcome to MASTERMIND! The game of code breaking!" << endl << endl;
    
    cout << "RULES OF THE GAME:" << endl;
    cout << "Valid colors: Red, Orange, Yellow, Green, Blue, Purple." << endl;
    cout << "Colors may be used multiple times." << endl;
    cout << "Enter exactly 4 colors!" << endl;
    cout << "Enter the code in the first line of the code-doc.txt file." << endl;
    cout << "When entering guesses, enter like so: royg" << endl;
    cout << "Use the first letter of the color, and do not separate with a space." << endl;
    cout << "After The Breaker has guessed, The Maker enters hints: o for correct color, and x for correct color and position." << endl;
    cout << "Enter a dash (-) if the color is not in the code." << endl << endl;
    
    cout << "Example of a round when code is royg:" << endl;
    cout << "rybg" << endl;
    cout << "xo-x" << endl << endl;
    
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
        
        // Loop thru all matches
        while (matches > 0) {
            // Player 1 is The Maker
            if (maker == 1) {
                // Validate code
                do {
                    cout << endl;
                    cout << "Player 1 Score: " << p1Total << "  Player 2 Score: " << p2Total << endl;
                    cout << "Player 2, TURN AROUND!! NO PEAKING!!" << endl;
                    do {
                        cout << "Player 1 is Code Maker. Enter a code into the 'code-doc.txt' file, then enter 1 here to continue: ";
                        cin.ignore(1);
                        cin >> val;
                    } while (val != 49);
                    val = 0;
                    codeDoc.open("code-doc.txt");
                    if (codeDoc) {
                        codeDoc >> code;
                        codeDoc.close();
                    }

                    for (int i = 0; i < 4; i++) {
                        codePc = tolower(code[i]);
                        switch (codePc) {
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
                
                
                cout << endl << endl;
            }
            // Player 2 is The Maker
            else if (maker == 2) {
                // Validate code
                do {
                    cout << endl;
                    cout << "Player 1 Score: " << p1Total << "  Player 2 Score: " << p2Total << endl;
                    cout << "Player 1, TURN AROUND!! NO PEAKING!!" << endl;
                    do {
                        cout << "Player 2 is Code Maker. Enter a code into the 'code-doc.txt' file, then enter 1 here to continue: ";
                        cin.ignore(1);
                        cin >> val;
                    } while (val != 49);
                    val = 0;
                    codeDoc.open("code-doc.txt");
                    if (codeDoc) {
                        codeDoc >> code;
                        codeDoc.close();
                    }
                    
                    for (int i = 0; i < 4; i++) {
                        codePc = tolower(code[i]);
                        switch (codePc) {
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
                
                
                cout << endl << endl;
            }
            
            // Guessing begins
            cout << "Start guessing!" << endl;
            
            // The Breaker will have 12 attempts at guessing the code
            for (int i = 0; i < GUESSES; i++) {
                guess = "";
                hints = "";
                chkHint = "";
                
                cout << "Guess " << i+1 << ":" << endl;
                cin >> setw(4) >> guess;
                
                // Compare guess to code. With 2 human players, this is to keep The Maker honest!
                for (int j = 0; j < 4; j++) {
                    inCode = false;
                    for (int k = 0; k < 4; k++) {
                        if (guess[j] == code[k]) {
                            if (j == k) {
                                chkHint += "x";
                                inCode = true;
                            }
                            else {
                                chkHint += "o";
                                inCode = true;
                            }
                        }
                    }
                    if (!inCode) {
                        chkHint += "-";
                    }
                }
                
                // The code was guessed correctly
                if (chkHint == "xxxx") {
                    cout << "Congratulations! You broke the code!" << endl;
                    cout << "Code: " << code << endl << endl;
                    
                    cout << "Player " << ((maker == 1) ? 1 : 2) << " earned "
                            << ((maker == 1) ? p1Pts : p2Pts) << " points this match." << endl << endl;
                    
                    p1Total += p1Pts;
                    p2Total += p2Pts;
                    p1Pts = 0;
                    p2Pts = 0;
                    
                    maker = (maker == 1) ? 2 : 1;
                    
                    i = GUESSES;
                }
                else {
                    // Check if proper hints were given
                    cin >> setw(4) >> hints;
                    if (hints != chkHint) {
                        cout << "The Maker isn't being honest..." << endl;
                        cout << "Actual hint: " << chkHint << endl;
                    }

                    // Give The Maker points if The Breaker guesses wrong
                    if (i == GUESSES-1) {
                        cout << "Oh no! The code was not broken... I guess you'll never know what it was..." << endl << endl;
                        (maker == 1) ? p1Pts += 2 : p2Pts += 2;

                        cout << "Player " << ((maker == 1) ? 1 : 2) << " earned "
                                << ((maker == 1) ? p1Pts : p2Pts) << " points this match." << endl << endl;

                        p1Total += p1Pts;
                        p2Total += p2Pts;
                        p1Pts = 0;
                        p2Pts = 0;

                        maker = (maker == 1) ? 2 : 1;
                    }
                    else {
                        (maker == 1) ? p1Pts++ : p2Pts++;
                        cout << "p1Pts: " << p1Pts << " p2Pts: " << p2Pts << endl;
                    }
                }
                
                
            }
            matches--;
        }
        
        cout << "GAME OVER!!" << endl;
        cout << "Final Score" << endl;
        cout << "Player 1: " << p1Total << "  Player 2: " << p2Total << endl;
        cout << "WINNER: " << ((p1Total > p2Total) ? "Player 1!" : "Player 2!") << endl;
    }

    return 0;
}

