/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh
 *
 * Created on January 13, 2018, 1:37 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    const int CALORIES_PER_COOKIE = 100;
    int cookiesEaten, calories;
    
    cout << "How many cookies did you eat? ";
    cin >> cookiesEaten;
    
    calories = cookiesEaten*CALORIES_PER_COOKIE;
    
    cout << "You consumed: " << calories << " calories.";    

    return 0;
}

