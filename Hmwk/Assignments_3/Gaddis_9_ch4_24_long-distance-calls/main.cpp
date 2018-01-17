/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh
 *
 * Created on January 17, 2018, 6:27 AM
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
    float time, timeMin, total;
    int min;
    
    // Initialize values
    const float EARLY = 5e-2;
    const float MID = 45e-2;
    const float LATE = 20e-2;
    
    // Format cout
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    // Gather input
    cout << "When did you begin your call?.\n";
    cout << "Please enter the time in military time and the form HH.MM (i.e. 07.00)\n";
    cout << "Midnight is 00.00\n";
    cin >> time;
    timeMin = time-static_cast<int>(time);
    
    // Validate input
    if (time >= 0.00 && time <= 23.59){
        if (timeMin >= 0.00 && timeMin <= 0.59) {
            cout << "How many minutes did the call last?\n";
            cin >> min;
            cout << endl;
            
            // Run calculations
            if (time >= 0.00 && time <= 06.59) {
                // Early rate
                total = EARLY*min;
            }
            else if (time >= 07.00 && time <= 19.00) {
                // Mid rate
                total = MID*min;
            }
            else {
                // Late rate
                total = LATE*min;
            }
            cout << "Your total bill is: $" << total << endl;
        }else {
            cout << "Time entered is invalid. Please run again.\n";
        }
    }
    else {
        cout << "Time entered is invalid. Please run again.\n";
    }

    return 0;
}

