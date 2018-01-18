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
    bool found = false;
    
    // Loop ones 1-9
    for (ones = 1; ones < 10; ones++) {
        // Loop tens 2-9
        for (tens = 2; tens <= 9; tens++) {
            thousands = tens*3;
        
            if (thousands > 9) {
                cout << "Address not found... thousands\n";
                break;
            }

            hundreds = 27-(thousands+tens+ones);
            if (hundreds <= 9) {
                if (hundreds != ones && hundreds != tens && hundreds != thousands) {
                    cout << "Address found!!\n";
                    cout << "The address is: " << thousands << hundreds << tens << ones << endl;
                    found = true;
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
        if (found) {
            break;
        }
    }

    return 0;
}

