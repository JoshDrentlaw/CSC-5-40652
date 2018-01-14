/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh
 *
 * Created on January 11, 2018, 9:26 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    // Declare variables
    int maxRoomCap, numPpl, addPpl, subPpl;
    bool query = true;
    
    while (query) {
        cout << "What is the max room capacity? ";
        cin >> maxRoomCap;
        cout << "How many people are attending the meeting? ";
        cin >> numPpl;

        if (numPpl <= maxRoomCap) {
            addPpl = maxRoomCap-numPpl;
            cout << "You can add " << addPpl << " to the meeting.\n";
            cout << "Run again? (1/0) ";
            cin >> query;
        }
        else if (numPpl > maxRoomCap) {
            subPpl = numPpl - maxRoomCap;
            cout << "This meeting is currently illegal!\n";
            cout << "Remove " << subPpl << " from this meeting to proceed.\n";
            cout << "Run again? (1/0) ";
            cin >> query;
        }
        else {
            cout << "Please enter only numbers! Thank you.";
        }
    }
    
    return 0;
}

