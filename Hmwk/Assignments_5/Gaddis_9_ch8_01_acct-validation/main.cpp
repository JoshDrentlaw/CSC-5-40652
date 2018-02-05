/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh Drentlaw
 *
 * Created on February 4, 2018, 5:34 PM
 */

// Libraries
#include <iostream>

using namespace std;

// Function prototypes
void acctLinearSearch(const int[], int, int);

/*
 * 
 */
int main(int argc, char** argv) {
    // Declare variables
    int acctNum;
    
    const int SIZE = 18;
    int accounts[SIZE] = {
        5658845, 4520125, 7895122, 8777541, 8451277,
        1302850, 8080152, 4562555, 5552012, 5050552,
        7825877, 1250255, 1005231, 6545231, 3852085,
        7576651, 7881200, 4581002
    };
    
    cout << "Please enter your 7 digit account number: ";
    cin >> acctNum;
    
    acctLinearSearch(accounts, SIZE, acctNum);
    
    return 0;
}

/*
 * acctLinearSearch finds the provided account number, and displays a message
 * saying whether the number is valid or not.
 * It uses linear search to find the account number. 
 * It takes a const array, the size of the array, and a value to search
 * for as arguments.
 */
void acctLinearSearch(const int arr[], int size, int value) {
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
        cout << "The account number you entered is invalid." << endl;
    }
    else {
        cout << "The account number you entered is valid." << endl;
    }
}
