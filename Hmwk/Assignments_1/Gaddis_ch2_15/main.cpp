/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh Drentlaw
 *
 * Created on January 7, 2018, 7:08 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    short rows;
    short spaces;
    short stars;
    
    cout << "How many rows in your pyramid?\n";
    cin >> rows;
    
    
    for (short i = 0; i < rows; i++) {
        spaces = rows-i;
        stars = (i*2)+1;
        for (spaces; spaces > 0; spaces--) {
            cout << " ";
        }
        for (stars; stars > 0; stars--) {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}

