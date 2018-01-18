/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh
 *
 * Created on January 17, 2018, 10:32 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int num;
    
    cout << "Please enter a number between 1 and 10: ";
    cin >> num;
    
    switch (num) {
        case 1:
            cout << num << " is I.\n";
            break;
        case 2:
            cout << num << " is II.\n";
            break;
        case 3:
            cout << num << " is III.\n";
            break;
        case 4:
            cout << num << " is IV.\n";
            break;
        case 5:
            cout << num << " is V.\n";
            break;
        case 6:
            cout << num << " is VI.\n";
            break;
        case 7:
            cout << num << " is VII.\n";
            break;
        case 8:
            cout << num << " is VIII.\n";
            break;
        case 9:
            cout << num << " is IX.\n";
            break;
        case 10:
            cout << num << " is X.\n";
            break;
        default:
            cout << "You didn't enter a number that is 1-10.\n";
            break;
    }

    return 0;
}

