/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh
 *
 * Created on January 22, 2018, 8:15 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

/*
 *  I only did 32-126 because there's no character for  0-31 and 127.
 *  Maybe I misunderstood.
 */
int main(int argc, char** argv) {
    char code = 32;
    
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 16; j++) {
            cout << code << " ";
            code++;
        }
        cout << endl;
    }

    return 0;
}

