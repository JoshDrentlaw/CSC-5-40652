/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh
 *
 * Created on January 18, 2018, 8:10 PM
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
    
    if (hrsWrkd > 40) {
        // Double pay
        hrsWrkd -= 40;
        payChck = (payRate*40)+(hrsWrkd*(payRate*2));
        cout << "Paycheck: $" << payChck << endl;
    }
    else if (hrsWrkd <= 40) {
        // Standard pay
        payChck = payRate*hrsWrkd;
        cout << "Paycheck: $" << payChck << endl;
    }
    else {
        cout << "No letters or negative numbers. Run again please.\n";
    }

    return 0;
}

