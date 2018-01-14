/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh
 *
 * Created on January 7, 2018, 10:33 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    short gallons = 15;
    short miles = 375;
    short mpg = miles/gallons;
    
    cout << "MPG: " << mpg;
    
    return 0;
}

