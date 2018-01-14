/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh
 *
 * Created on January 7, 2018, 10:11 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float payAmount = 2200.0;
    short payPeriods = 26;
    float annualPay = payAmount*payPeriods;
    
    cout << "Employee's annual pay: $" << annualPay;
    
    return 0;
}

