/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh
 *
 * Created on January 9, 2018, 9:03 PM
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
    float base, salesTax, caTax, fedTax, regGas, totalTax;
    
    // Initialize values
    salesTax = 2.25e-2f;
    caTax = 4.17e-1f;
    fedTax = 1.84e-1f;
    regGas = 2.75;
    
    // Make calculations
    base = (regGas-caTax-fedTax)/(1+salesTax);
    totalTax = fedTax+caTax+base*salesTax;
    
    //Output
    cout << fixed << setprecision(2) << showpoint;
    cout << "The total tax on a gallon of gas   = $" << setw(6)
            << totalTax << endl;
    cout << "The base price for a gallon of gas = $" << setw(6)
            << base << endl;
    cout << "Percentage of price due to gas tax =  " << setw(6)
            << totalTax/base*100 << "%" << endl;
    cout << "Oil Company profit range           =  " << setw(6)
            << 0.07/base*100 << "% to 6.5%" << endl;
    
    return 0;
}

