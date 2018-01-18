/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh
 *
 * Created on January 17, 2018, 8:09 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    // Declare/Initiate variables
    float pennies, nickels, dimes, quarters, dollar;
    const float PENNY = 1e-2;
    const float NICKEL =5e-2;
    const float DIME = 1e-1;
    const float QUARTER = 25e-2;
    const float DOLLAR = 1e+0;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    cout << "Welcome to \"Change for a Dollar!!\"\n";
    cout << "Please enter a number of the following to see if the total is 1 dollar...\n";
    cout << "Pennies: ";
    cin >> pennies;
    cout << "Nickels: ";
    cin >> nickels;
    cout << "Dimes: ";
    cin >> dimes;
    cout << "Quarters: ";
    cin >> quarters;
    cout << endl << endl;
    
    pennies *= PENNY;
    nickels *= NICKEL;
    dimes *= DIME;
    quarters *= QUARTER;
    
    dollar = pennies+nickels+dimes+quarters;
    
    if (dollar < DOLLAR || dollar > DOLLAR) {
        cout << "Sorry, you lose...\n";
        cout << "The amount you entered was: $" << dollar << endl;
    }
    else {
        cout << "You did it! You entered exactly $" << dollar <<"!!\n";
    }

    return 0;
}

