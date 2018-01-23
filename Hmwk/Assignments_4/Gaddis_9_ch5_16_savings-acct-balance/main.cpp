/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh
 *
 * Created on January 22, 2018, 7:28 PM
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
    float balance, annualInt, monthlyInt, earnedInt, withdraw, deposit;
    int months, withdrawals, deposits;
    
    // Format cout
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    // Initialize variables
    cout << "What was the starting balance for the account: $";
    cin >> balance;
    
    cout << "What is the annual interest rate for your account: ";
    cin >> annualInt;
    annualInt /= 100;
    monthlyInt = annualInt/12; 
    
    cout << "How many months since the account was established: ";
    cin >> months;
    
    for (int i = 1; i <= months; i++) {
        do {
            cout << "How much was deposited in month " << i << ": $";
            cin >> deposit;
        } while (deposit < 0);
        // Tally deposits
        deposits += (deposit > 0) ? 1 : 0;
        
        do {
            cout << "How much was withdrawn in month " << i << ": $";
            cin >> withdraw;
        } while (withdraw < 0);
        // Tally withdrawals
        withdrawals += (withdraw > 0) ? 1 : 0;
        
        // Calculate monthly balance
        balance = (balance+deposit-withdraw)*(1+monthlyInt);
        // Tally earned interest
        earnedInt += (balance+deposit-withdraw)*(monthlyInt);
        
        if (balance < 0) {
            break;
        }
    }
    
    // Output
    if (balance < 0) {
        cout << "Your account has a negative balance. Your account has been terminated.\n";
    }
    else {
        cout << "The current balance is: $" << balance << endl;
        cout << "Total earned interest:  $" << earnedInt << endl;
        cout << "Number of deposits:      " << deposits << endl;
        cout << "Number of withdrawals:   " << withdrawals << endl;
    }

    return 0;
}

