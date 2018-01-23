/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh
 *
 * Created on January 22, 2018, 9:49 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float cals = 3.6;
    
    for (int i = 5; i <= 30; ) {
        cout << "Calories burned after " << i << " mins: " << i*cals << endl;
        i += 5;
    }

    return 0;
}

