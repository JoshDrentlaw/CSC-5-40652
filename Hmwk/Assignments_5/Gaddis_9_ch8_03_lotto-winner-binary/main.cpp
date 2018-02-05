/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh Drentlaw
 *
 * Created on February 4, 2018, 6:49 PM
 */

// Libraries
#include <iostream>

using namespace std;

// Function prototypes
void lottoBinarySearch(const int [], int, int);

/*
 * 
 */
int main(int argc, char** argv) {
    // Declare variables
    int winner;
    const int SIZE = 10;
    const int favNums[SIZE] = {
        13579, 26791, 26792, 33445, 55555,
        62483, 77777, 79422, 85647, 93121
    };
    
    cout << "Please enter this weeks winning 5 digit number: ";
    cin >> winner;
    
    lottoBinarySearch(favNums, SIZE, winner);

    return 0;
}

/*
 * lottoBinarySearch finds the provided winning lotto number, and displays a message
 * saying whether any of your numbers are a winner or not.
 * It uses binary search to find a winning number. The list is pre-sorted. 
 * It takes a const array, the size of the array, and a value to search
 * for as arguments.
 */
void lottoBinarySearch(const int arr[], int size, int value) {
    int first = 0,
        last = size - 1,
        position = -1,
        middle;
    bool found = false;
    
    while (!found && first <= last) {
        middle = (first + last) / 2;
        if (arr[middle] == value) {
            found = true;
            position = middle;
        }
        else if (arr[middle] > value) {
            last = middle - 1;
        }
        else {
            first = middle + 1;
        }
    }
    
    if (position == -1) {
        cout << "None of your numbers were winners this week." << endl;
    }
    else {
        cout << "You won this week!!!" << endl;
    }
}

