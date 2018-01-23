/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh
 *
 * Created on January 22, 2018, 10:08 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float memDue = 2500;
    float feeInc = 4e-2;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    cout << "Starting fee: $" << memDue << endl;
    
    for (int i = 1; i <= 6; i++) {
        memDue *= (1+feeInc);
        cout << "Fee at year " << i << ": $" << memDue << endl;
    }

    return 0;
}

