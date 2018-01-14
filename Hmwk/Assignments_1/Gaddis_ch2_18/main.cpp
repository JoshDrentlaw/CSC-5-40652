/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh
 *
 * Created on January 7, 2018, 11:23 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int sampleSize = 16500;
    float oneOrMore = 0.15;
    float citrus = 0.58;
    
    float oneOrMoreAppx = sampleSize*oneOrMore;
    float citrusAppx = oneOrMoreAppx*citrus;
    
    cout << "Approximate # of customers who purchase 1+ drinks/week: " << oneOrMoreAppx << ".\n";
    cout << "Approximate # of those customers who prefer citrus flavor: " << citrusAppx << ".\n";
    
    return 0;
}

