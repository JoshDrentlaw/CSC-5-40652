/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh
 *
 * Created on January 13, 2018, 12:32 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    // Declare variables
    float amount, principal, interest, intRate;
    int cmpd;
    
    // Gather input
    cout << "What is the principal? $";
    cin >> principal;
    cout << "What is the interest rate? ";
    cin >> intRate;
    cout << "How many times a year is the interest compounded? ";
    cin >> cmpd;
    
    intRate /= 100;
    
    cout << intRate << endl;
    
    amount = (intRate/cmpd)+1;
    amount = pow(amount, cmpd);
    amount *= principal;
    interest = amount-principal;
    
    intRate *= 100;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    cout << "Interest Rate:      " << intRate << "%" << endl;
    cout << "Times Compounded:   " << cmpd << endl;
    cout << "Principal:         $" << principal << endl;
    cout << "Interest:          $" << interest << endl;
    cout << "Amount in Savings: $" << amount << endl;

    return 0;
}

