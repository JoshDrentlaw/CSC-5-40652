/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh
 *
 * Created on January 13, 2018, 12:16 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    // Declare variable
    float propTax, assessValue, actualValue;
    
    // Initialize variables
    propTax = 0.75e-2;
    assessValue = 60e-2;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    // Gather input
    cout << "What is the value of your property: $";
    cin >> actualValue;
    
    assessValue *= actualValue;
    propTax *= assessValue;
    
    cout << "The assessment value is: $" << assessValue << endl;
    cout << "The property tax is:     $" << propTax << endl;

    return 0;
}

