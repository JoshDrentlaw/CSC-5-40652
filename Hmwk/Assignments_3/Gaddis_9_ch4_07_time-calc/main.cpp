/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh
 *
 * Created on January 17, 2018, 9:44 PM
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
    int secs, mins, hours, days;
    
    // Initiate values
    const int MINS = 60;
    const int HOURS = 3600;
    const int DAYS = 86400;
    
    // Gather input
    cout << "Enter a number of seconds to get the seconds, minutes, hours, and days. ";
    cin >> secs;
    
    // One minute or more
    if (secs >= MINS) {
        // One hour or more
        if (secs >= HOURS) {
            // One day or more
            if (secs >= DAYS) {
                days = secs/DAYS;
                secs %= DAYS;
            }
            hours = secs/HOURS;
            secs %= HOURS;
        }
        mins = secs/MINS;
        secs %= MINS;
    }
    
    cout << "Days: " << days << " Hours: " << hours << " Minutes: " << mins << " Seconds: " << secs << endl;

    return 0;
}

