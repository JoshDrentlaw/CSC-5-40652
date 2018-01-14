/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh
 *
 * Created on January 13, 2018, 1:31 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int gallons, maxMiles, mpg;
    
    cout << "How many gallons does your car hold? ";
    cin >> gallons;
    cout << "How many miles can be driven on a full tank of gas? ";
    cin >> maxMiles;
    
    mpg = maxMiles/gallons;
    
    cout << "Your cars estimated MPG is: " << mpg << " MPG" << endl;

    return 0;
}

