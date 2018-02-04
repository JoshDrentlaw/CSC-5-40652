/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh Drentlaw
 *
 * Created on February 4, 2018, 11:43 AM
 */

// Libraries
#include <iostream>
#include <iomanip>

using namespace std;

// Function prototypes

/*
 * 
 */
int main(int argc, char** argv) {
    // Declare variables
    float year, avg, hiRain, lowRain;
    string hiMon, lowMon;
    
    const int SIZE = 12;
    float rainfall[SIZE];
    string months[] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };
    
    cout.setf(ios::fixed | ios::showpoint);
    cout.precision(1);
    
    // Get rainfall for each month
    for (int i = 0; i < SIZE; i++) {
        do {
            cout << "Please enter the rainfall for the month of " << months[i] << ": ";
            cin >> rainfall[i];
        } while (rainfall[i] < 0);
    }
    
    // Calculate the yearly rainfall
    for (float val : rainfall) {
        year += val;
    }
    
    // Monthly average
    avg = year/12;
    
    // Find highest and lowest months
    hiRain = rainfall[0];
    lowRain = rainfall[0];
    for (int i = 0; i < SIZE; i++) {
        if (rainfall[i] > hiRain) {
            hiRain = rainfall[i];
            hiMon = months[i];
        }
        else if(rainfall[i] < lowRain) {
            lowRain = rainfall[i];
            lowMon = months[i];
        }
    }
    
    cout << endl;
    cout << "Yearly rainfall total:    " << year << endl;
    cout << "Monthly average rainfall: " << avg << endl << endl;
    cout << "Month with highest amount of rainfall: " << hiMon << ", with " << hiRain << " inch(es) of rain." << endl;
    cout << "Month with lowest amount of rainfall: " << lowMon << ", with " << lowRain << " inch(es) of rain." << endl;

    return 0;
}

