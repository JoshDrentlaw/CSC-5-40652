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
    int getInt, current, testLow, testHigh;
    
    ofstream writeInt;
    ifstream readInt;
    writeInt.open("intFile.txt");
    
    cout << "Please enter integers. Enter -99  to end the series.\n";
    
    do {
        cout << "Enter integer: ";
        cin >> getInt;
        
        writeInt << getInt << endl;
    } while (getInt != -99);
    
    writeInt.close();
    readInt.open("intFile.txt");
    
    if (readInt) {
        readInt >> current;
        testHigh = current;
        testLow = current;
    }
    
    while (current != -99) {
        testHigh = (current > testHigh) ? current : testHigh;
        testLow = (current < testLow) ? current : testLow;
        readInt >> current;
    }
    
    readInt.close();
    
    cout << "The greatest value is: " << testHigh << endl;
    cout << "The lowest value is: " << testLow << endl;

    return 0;
}

