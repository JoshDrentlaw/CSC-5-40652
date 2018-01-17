/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh
 *
 * Created on January 16, 2018, 8:32 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    char pack;
    int gB;
    float extraGB, total;
    
    const float PAK_A = 39.99;
    const float PAK_B = 59.99;
    const float PAK_C = 69.99;
    
    const int GIG_A = 4;
    const int GIG_B = 8;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    cout << "Package A: $39.99, 4GB, $10/GB additional data.\n";
    cout << "Package B: $59.99, 8GB, $5/GB additional data.\n";
    cout << "Package C: $69.99, Unlimited data.\n";
    cout << "Please enter the capital letter of the package you have purchased: ";
    cin >> pack;
    
    if (pack >= 65 && pack <= 67) {
        if (pack == 65 || pack == 66) {
            cout << "How many gigabytes of data did you use? ";
            cin >> gB;
            switch (pack) {
                case 65:
                    if (gB > GIG_A) {
                        extraGB = (gB-GIG_A)*10;
                        total = PAK_A+extraGB;
                        cout << "Package A bill total: $" << total << endl;
                    }
                    else {
                        cout << "Package A bill total: $" << PAK_A << endl;
                    }
                    break;
                case 66:
                    if (gB > GIG_B) {
                        extraGB = (gB-GIG_B)*5;
                        total = PAK_B+extraGB;
                        cout << "Package B bill total: $" << total << endl;
                    }
                    else {
                        cout << "Package B bill total: $" << PAK_B << endl;
                    }
                    break;
            }
        }
        else {
            cout << "Package C bill total: $" << PAK_C << endl;
        }        
    }
    else {
        cout << "Please run the program again and enter the letter\n";
        cout << " of the package you purchased in capital form.\n";
        return 0;
    }

    return 0;
}

