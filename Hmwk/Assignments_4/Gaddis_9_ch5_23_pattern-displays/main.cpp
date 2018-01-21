/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh
 *
 * Created on January 21, 2018, 11:28 AM
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    string plusA = "";
    
    cout << "-------------\n";
    cout << " Pattern A\n";
    cout << "-------------\n";
    
    for (int i = 1; i <= 10; i++) {
        cout << (plusA += "+") << endl;
    }
    
    cout << "-------------\n";
    
    cout << "-------------\n";
    cout << " Pattern B\n";
    cout << "-------------\n";
    
    for (int i = 1; i <= 10; i++) {
        for (int j = 11-i; j > 0; j--) {
            cout << "+";
        }
        cout << endl;
    }
    
    cout << "-------------\n";

    return 0;
}

