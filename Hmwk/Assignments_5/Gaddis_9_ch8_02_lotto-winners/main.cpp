/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh Drentlaw
 *
 * Created on February 4, 2018, 6:27 PM
 */

// Libraries
#include <iostream>

using namespace std;

// Function prototypes
void lottoLinearSearch(const int [], int, int);

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
    
    lottoLinearSearch(favNums, SIZE, winner);

    return 0;
}

/*
 * lottoLinearSearch finds the provided winning lotto number, and displays a message
 * saying whether any of your numbers are a winner or not.
 * It uses linear search to find a winning number. 
 * It takes a const array, the size of the array, and a value to search
 * for as arguments.
 */
void lottoLinearSearch(const int arr[], int size, int value) {
    int index = 0;
    int position = -1;
    bool found = false;
    
    while (index < size && !found) {
        if (arr[index] == value) {
            found = true;
            position = index;
        }
        index++;
    }
    
    if (position == -1) {
        cout << "None of your numbers were winners this week." << endl;
    }
    else {
        cout << "You won this week!!!" << endl;
    }
}

