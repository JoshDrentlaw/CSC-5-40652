/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh
 *
 * Created on January 18, 2018, 9:07 PM
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
    float payRate, hrsWrkd, payChck;
    
    // Format cout
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    // Gather input
    cout << "What is your hourly rate? ";
    cin >> payRate;
    cout << "How many hours did you work? ";
    cin >> hrsWrkd;
    
    switch (hrsWrkd > 40) {
        case true: // Double pay
            hrsWrkd -= 40;
            payChck = (payRate*40)+(hrsWrkd*(payRate*2));
            cout << "Paycheck: $" << payChck << endl;
            break;
        case false: // Standard pay
            payChck = payRate*hrsWrkd;
            cout << "Paycheck: $" << payChck << endl;
            break;
        default:
            cout << "Please run again.\n";
            break;
    }

    return 0;
}

