/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh
 *
 * Created on January 21, 2018, 3:01 PM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    // Declare variables
    int getInt, current, testLow, testHigh;
    
    ofstream writeInt;
    ifstream readInt;
    
    // Open intFile.txt, the file we'll use to store the integers the user enters
    writeInt.open("intFile.txt");
    
    cout << "Please enter integers. Enter -99  to end the series.\n";
    
    // User enters integers
    do {
        cout << "Enter integer: ";
        cin >> getInt;
        
        writeInt << getInt << endl;
    } while (getInt != -99);
    
    // Close the write head
    writeInt.close();
    
    // Open read head on intFile.txt
    readInt.open("intFile.txt");
    
    // Initialize test variables
    if (readInt) {
        readInt >> current;
        testHigh = current;
        testLow = current;
    }
    
    // Find largest and smallest integers
    while (current != -99) {
        testHigh = (current > testHigh) ? current : testHigh;
        testLow = (current < testLow) ? current : testLow;
        readInt >> current;
    }
    
    // Close read head
    readInt.close();
    
    // Display greatest and lowest values
    cout << "The greatest value is: " << testHigh << endl;
    cout << "The lowest value is: " << testLow << endl;

    return 0;
}

