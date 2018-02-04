/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh Drentlaw
 *
 * Created on February 4, 2018, 12:44 PM
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
    int hi, low, total;
    string hiFlv, lowFlv;
    
    const int SIZE = 5;
    int sales[SIZE];
    string flavors[] = {
        "Mild",
        "Medium",
        "Sweet",
        "Hot",
        "Zesty"
    };
    
    // Get sales numbers
    for (int i = 0; i < SIZE; i++) {
        do {
            cout << "Please enter the number of jars sold for " << flavors[i] << ": ";
            cin >> sales[i];
        } while (sales[i] < 0);
    }
    
    // Calculate total sales
    for (int units : sales) {
        total += units;
    }
    
    // Find best and worst selling salsas
    hi = sales[0];
    low = sales[0];
    for (int i = 0; i < SIZE; i++) {
        if (sales[i] > hi) {
            hi = sales[i];
            hiFlv = flavors[i];
        }
        else if (sales[i] < low) {
            low = sales[i];
            lowFlv = flavors[i];
        }
    }
    
    // Display totals
    cout << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Number of " << flavors[i] << " jars sold: " << sales[i] << endl;
    }
    cout << "Total jars sold: " << total << endl << endl;
    cout << "Best selling salsa: " << hiFlv << ", with " << hi << " jars sold." << endl;
    cout << "Worst selling salsa: " << lowFlv << ", with " << low << " jars sold." << endl;

    return 0;
}

