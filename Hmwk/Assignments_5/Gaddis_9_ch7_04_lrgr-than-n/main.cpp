/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh Drentlaw
 *
 * Created on February 4, 2018, 1:19 PM
 */

// Libraries
#include <iostream>

using namespace std;

// Function prototypes
void largerThanN(int [], int, int);

/*
 * 
 */
int main(int argc, char** argv) {
    // Declare variables
    const int SIZE = 10;
    int values[] = {1, 4, 6, 10, 19, 2, 3, 15, 17, 11};
    int n = 10;
    
    largerThanN(values, SIZE, n);

    return 0;
}

/*
 * This function displays all the integers in an array that are larger than n. 
 * It takes an array of integers, the size of the array, and an integer n to test against.
 */
void largerThanN(int values[], int SIZE, int n) {
    cout << "Integers larger than " << n << ": ";
    for (int i = 0; i < SIZE; i++) {
        if (values[i] > n) {
            cout << values[i] << " ";
        }
    }
}
