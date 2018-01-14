/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh
 *
 * Created on January 12, 2018, 6:03 AM
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
    float pay, regPay, grsPay, netPay, ovrPay;
    float socTax, usTax, caTax, unionDue, exHltCost;
    int depends, hrsWrkd, ovrHrs;
    bool query = true;
    
    // Format output
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    while (query) {
        // Initialize variables
        pay = 16.78;
        ovrPay = pay*1.5;
        socTax = 6e-2;
        usTax = 14e-2;
        caTax = 5e-2;
        unionDue = 10;
        exHltCost = 35;

        // Gather input
        cout << "How many hours did you work? ";
        cin >> hrsWrkd;
        cout << "How many dependants do you have? ";
        cin >> depends;
        cout << endl;
        
        // Run calculations
        if (hrsWrkd > 40) {
            ovrHrs = hrsWrkd-40;
            regPay = pay*hrsWrkd;
            ovrPay *= ovrHrs;
            grsPay = regPay+ovrPay;
        }
        else {
            regPay = pay*hrsWrkd;
            ovrPay = 0;
            grsPay = regPay;
        }
        
        socTax *= grsPay;
        usTax *= grsPay;
        caTax *= grsPay;
        
        if (depends >= 3) {
            netPay = grsPay-socTax-usTax-caTax-unionDue-exHltCost;
        }
        else {
            netPay = grsPay-socTax-usTax-caTax-unionDue;
            exHltCost = 0;
        }
        
        // Output data
        cout << "Regular pay:         $" << regPay << endl;
        cout << "Overtime pay:        $" << ovrPay << endl;
        cout << "Gross pay:           $" << grsPay << endl << endl;
        
        cout << "US Tax:              $" << usTax << endl;
        cout << "CA Tax:              $" << caTax << endl;
        cout << "Social Security Tax: $" << socTax << endl;
        cout << "Extra Health cost:   $" << exHltCost << endl;
        cout << "Union Dues:          $" << unionDue << endl << endl;
        
        cout << "Net pay:             $" << netPay << endl << endl;
        
        cout << "Run again? (1/0) ";
        cin >> query;
    }

    return 0;
}

