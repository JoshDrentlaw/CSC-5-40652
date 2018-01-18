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
#include <cmath>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int ones, tens, hundreds, thousands, address;
    bool run = true;
    
    for (ones = 0; ones <= 9; ones++) {
        tens =  tens == 10 ? ones+1 : 0;
        thousands = tens*3;
        if (thousands > 9) {
            cout << "Address not found...\n";
            break;
        }
        
    }

    return 0;
}

