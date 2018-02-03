/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh
 *
 * Created on February 2, 2018, 9:01 PM
 */

#include <iostream>
#include <iomanip>

// Function Prototypes
float calculateRetail(float, float);

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    // Declare variables
    float whlCost, markup, retail;
    
    // Validate and gather user input
    do {
        cout << "Please enter a wholesale cost of an item and the markup percentage: $";
        cin >> whlCost >> markup;
    } while (whlCost < 0 || markup < 0);
    
    // Calculate retail price
    retail = calculateRetail(whlCost, markup);
    
    // Output retail price
    cout << "The retail cost of the item is: $" << setprecision(2) << retail << endl;
    
    // Exit
    return 0;
}

//*********************************************************************
// This function calculates the retail markup for wholesale items.    *
// It takes the wholesale price of an item and the markup percentage. *
// It returns the retail price of the item.                           *
//*********************************************************************
float calculateRetail(float whlCost, float markup) {
    markup = (markup/100)+1;
    return whlCost*markup;
}
