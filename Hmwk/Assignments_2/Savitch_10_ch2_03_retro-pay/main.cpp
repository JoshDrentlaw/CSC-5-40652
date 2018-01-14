/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh
 *
 * Created on January 11, 2018, 8:21 PM
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
    const float payInc = 7.6e-2f;
    int retroMonths;
    float prvAnlSal, prvMntSal, retroPay, newAnlSal, newMntSal;
    bool query = true;
    
    // Format doubles to 2 decimal places
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    while (query) {
        // Gather input from employee
        cout << "What was your previous annual salary? $";
        cin >> prvAnlSal;
        cout << "How many months of retroactive pay due? ";
        cin >> retroMonths;

        // Make calculations
        
        // I read up on (1+%) after I saw it in the lab. It's so cool!
        newAnlSal = prvAnlSal*(1+payInc);
        newMntSal = newAnlSal/12;
        prvMntSal = prvAnlSal/12;
        
        // I'm assuming that retroactive pay is the diff between your previous
        // and current pay for the specified months.
        retroPay = retroMonths*(newMntSal-prvMntSal);

        // Output data to employee
        cout << "\nAmount of retroactive pay due: $" << retroPay << endl;
        cout << "New annual salary:             $" << newAnlSal << endl;
        cout << "New monthly salary:            $" << newMntSal << endl;
        cout << "Run again? (1/0) ";
        cin >> query;
    }

    return 0;
}

