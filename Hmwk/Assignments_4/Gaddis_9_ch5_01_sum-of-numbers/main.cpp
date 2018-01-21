/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh
 *
 * Created on January 21, 2018, 2:11 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    // Declare variables
    int n, acc;
    
    // Initialize values
    acc = 0;
    
    cout << "Please enter a positive integer: ";
    cin >> n;
    
    // Validate input
    while (n < 0) {
        cout << "ERROR! Please enter a positive integer: ";
        cin >> n;
    }
    
    // Run calculation
    for (int i = 1; i <= n; i++) {
        acc += i;
    }
    
    // Show output
    cout << "The sum of 1-" << n << " = " << acc << "." << endl;

    return 0;
}

