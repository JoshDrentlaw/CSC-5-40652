/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh
 *
 * Created on January 17, 2018, 10:24 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int first, second;
    
    cout << "Please enter 2 numbers: ";
    cin >> first >> second;
    
    if (first > second) {
        cout << "Min: " << second << " Max: " << first << endl;
    }
    else if (first < second) {
        cout << "Min: " << first  << " Max: " <<second << endl;
    }
    else {
        cout << "No min/max. Numbers equal each other.\n";
    }

    return 0;
}

