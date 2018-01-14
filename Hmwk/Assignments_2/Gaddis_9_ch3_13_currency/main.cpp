/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh
 *
 * Created on January 12, 2018, 8:17 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    // Declare variables
    float dollars, yen, euros;
    const float YEN_PER_DOLLAR = 98.93;
    const float EUROS_PER_DOLLAR = 0.74;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    // Gather input
    cout << "Enter a dollar amount: $";
    cin >> dollars;
    
    yen = dollars*YEN_PER_DOLLAR;
    euros = dollars*EUROS_PER_DOLLAR;
    
    cout << "$" << dollars << " is worth ¥" << yen << endl;
    cout << "$" << dollars << " is worth €" << euros << endl;

    return 0;
}

