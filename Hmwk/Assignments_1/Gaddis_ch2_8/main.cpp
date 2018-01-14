/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh
 *
 * Created on January 7, 2018, 9:36 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float item1 = 15.95;
    float item2 = 24.95;
    float item3 = 6.95;
    float item4 = 12.95;
    float item5 = 3.95;
    
    float subtotal = item1+item2+item3+item4+item5;
    float salesTax = 0.07;
    
    float total = subtotal*salesTax;
    
    cout << "          $" << item1 << "\n";
    cout << "          $" << item2 << "\n";
    cout << "          $" << item3 << "\n";
    cout << "          $" << item4 << "\n";
    cout << "          $" << item5 << "\n";
    cout << "         --------" << "\n";
    cout << "Subtotal: $" << subtotal << "\n";
    cout << "Sales Tax:    7%" << "\n";
    cout << "         --------" << "\n";
    cout << "Total:    $" << total << "\n";
    
    return 0;
}

