/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh
 *
 * Created on January 7, 2018, 9:23 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float v1 = 28;
    float v2 = 32;
    float v3 = 37;
    float v4 = 24;
    float v5 = 33;
    
    float sum = v1+v2+v3+v4+v5;
    
    float average = sum/5;
    
    cout << average;
    
    return 0;
}

