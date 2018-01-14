/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh
 *
 * Created on January 7, 2018, 10:57 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int time;
    int acc = 32;
    int distance;
    
    cout << "Enter a time in seconds. >>";
    cin >> time;
    
    distance = (acc*(time*time))/2;
    
    cout << "In " << time << " seconds, this object drops " << distance << " ft. \n";

    return 0;
}

