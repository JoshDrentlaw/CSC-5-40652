/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh
 *
 * Created on January 17, 2018, 12:21 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int toothpicks, p1, p2;
    string winner, loser;
    bool play = true;
    
    toothpicks = 23;
    
    cout << "Welcome to 23! The game of 23 toothpicks!\n";
    cout << "Draw 1, 2, or 3 toothpicks from the pile, just don't draw the last 1!\n";
    
    while (play) {
        cout << "Number of toothpicks: " << toothpicks << endl << endl;
        
        cout << "Player 1 takes: ";
        cin >> p1;
        cout << endl;
        
        if (p1 >= 1 && p1 <= 3) {
            toothpicks -= p1;
        
            if (toothpicks < 1) {
                play = false;
                winner = "Player 2";
                loser = "Player 1";
                break;                
            }
        }
        else{
            cout << "Are you cheating? Run the game again, and follow the rules!\n";
            return 0;
        }
        
        
        cout << "Number of toothpicks: " << toothpicks << endl << endl;
        
        if (toothpicks > 4) {
            p2 = 4-p1;
            cout << "Player 2 takes: " << p2 << endl << endl;
            toothpicks -= p2;
        }
        else if (toothpicks >= 2 && toothpicks <= 4) {
            p2 = toothpicks-(toothpicks-1);
            cout << "Player 2 takes: " << p2 << endl << endl;
            toothpicks -= p2;
        }
        else {
            p2 = 1;
            cout << "Player 2 takes: " << p2 << endl << endl;
            toothpicks -= p2;
            play = false;
            winner = "Player 1";
            loser = "Player 2";
        }
    }
        
    cout << "The winner is: " << winner << endl;
    cout << "The loser is: " << loser << endl;

    return 0;
}

