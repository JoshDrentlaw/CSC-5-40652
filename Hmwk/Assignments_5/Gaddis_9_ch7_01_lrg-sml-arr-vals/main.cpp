/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh Drentlaw
 *
 * Created on February 4, 2018, 11:25 AM
 */

// Libraries
#include <iostream>

using namespace std;

// Function prototypes

/*
 * 
 */
int main(int argc, char** argv) {
    // Declare variables
    float current, sml, lrg;
    int count = 0;
    
    const int SIZE = 10;
    float values[SIZE];
    
    while (count < SIZE) {
        cout << "Please enter a value: ";
        cin >> values[count];
        count++;
    }
    
    sml = values[0];
    lrg = values[0];
    for (float val : values) {
        current = val;
        if (current > lrg) {
            lrg = current;
        }
        else if (current < sml) {
            sml = current;
        }
    }
    
    cout << "Largest value: " << lrg << endl;
    cout << "Smallest value: " << sml << endl;

    return 0;
}

