/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh
 *
 * Created on January 7, 2018, 10:43 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    short nickels;
    short nickel = 5;
    
    short dimes;
    short dime = 10;
    
    short quarters;
    short quarter = 25;
    
    short total;
    
    cout << "How many nickels do you have? >>";
    cin >> nickels;
    nickels *= nickel;
    
    cout << "How many dimes do you have? >>";
    cin >> dimes;
    dimes *= dime;
    
    cout << "How many quarters do you have? >>";
    cin >> quarters;
    quarters *= quarter;
    
    total = nickels+dimes+quarters;
    
    cout << "Total value of coins: " << total << "cents.";
    
    return 0;
}

