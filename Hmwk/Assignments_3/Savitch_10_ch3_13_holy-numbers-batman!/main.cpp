/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh
 *
 * Created on January 17, 2018, 7:05 PM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int ones, tens, hundreds, thousands, address;
    
    ones = tens = hundreds = thousands = address = 0;
    bool run = true;
    
    // Loop ones 0-9
    for (ones; ones <= 9; ones++) {
        tens = tens == 10 ? 0 : ones+1;
        // Loop tens 0-9
        for (tens; tens <= 9; tens++) {
            thousands = thousands == 0 ? tens+3 : tens*3;
        
            if (thousands > 9) {
                cout << "Address not found... thousands\n";
            }

            hundreds = 27-thousands-tens-ones;
            if (hundreds <= 9) {
                if (hundreds != ones && hundreds != tens && hundreds != thousands) {
                    cout << "Address found!!\n";
                    cout << "The address is: " << thousands << hundreds << tens << ones << endl;
                    break;
                }
                else {
                    cout << "Address not found... hundreds similar\n";
                }
            }
            else {
                cout << "Address not found... hundreds greater than 9\n";
            }
        }
        
    }

    return 0;
}

