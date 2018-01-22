/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh
 *
 * Created on January 22, 2018, 7:52 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    // Declare variable
    int dim;
    
    // Initialize dim
    cout << "Please enter a number between 1-15: ";
    cin >> dim;
    
    // Validate dim
    while (dim < 1 || dim > 15) {
        cout << "Please enter a number between 1-15: ";
        cin >> dim;
    }
    
    // Print X in the dimensions specified
    for (int i = 0; i < dim; i++) {
        for (int j = 0; j < dim; j++) {
            cout << "X";
        }
        cout << endl;
    }
    
    // Exit
    return 0;
}

