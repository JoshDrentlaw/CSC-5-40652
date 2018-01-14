/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh
 *
 * Created on January 12, 2018, 7:57 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    // Declare variables
    float cels, fahr;
    
    // Gather input
    cout << "Input degrees in Fahrenheit ";
    cin >> fahr;
    
    // Run calculations
    cels = (fahr-32)*(0.55555556);
    
    // Output data
    cout << fahr << " degrees F is equal to " << cels << " degrees C.\n";

    return 0;
}

