/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh
 *
 * Created on January 22, 2018, 8:59 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float lvl = 1.5;
    
    cout << "------------------------\n";
    cout << " Ocean level rise in mm\n";
    cout << "------------------------\n";
    cout << "  Years\tmm\n";
    cout << "------------------------\n";
    
    for (int i = 1; i <= 25; i++) {
        cout<< "  " << i << "\t" << lvl << endl;
        lvl += 1.5;
    }

    return 0;
}

