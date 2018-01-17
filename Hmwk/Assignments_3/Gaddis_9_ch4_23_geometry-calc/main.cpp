/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh
 *
 * Created on January 17, 2018, 7:32 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    // Declare variables
    int choice;
    float radius, length, width, base, height, area;
    
    // Initialize values
    const float PI = 3.14159;
    
    cout << "Geometry Calculator\n";
    cout << "   1. Calculate the Area of a Circle\n";
    cout << "   2. Calculate the Area of a Rectangle\n";
    cout << "   3. Calculate the Area of a Triangle\n";
    cout << "   4. Quit" << endl << endl;
    cout << "   Enter your choice (1-4): ";
    cin >> choice;
    
    // Validate choice
    if (choice >= 1 && choice <= 4) {
        switch (choice) {
            case 1: // Circle
                cout << "Please enter a radius: ";
                cin >> radius;
                // Validate radius
                if (radius >= 0) { 
                    area = PI*(pow(radius, 2));
                    cout << "Area of Circle with radius " << radius << ": " << area << endl;
                }
                else {
                    cout << "Please run again and enter a positive number.\n";
                }
                break;
            case 2: // Rectangle
                cout << "Please enter a length and width: ";
                cin >> length >> width;
                // Validate length and width
                if (length >= 0 && width >= 0) {
                    area = length*width;
                    cout << "Area of Rectangle with length " << length << " and wdith "
                            << width << ": " << area << endl;
                }
                else {
                    cout << "Please run again and enter positive numbers.\n";
                }
                break;
            case 3: // Triangle
                cout << "Please enter a base and height: ";
                cin >> base >> height;
                // Validate base and height
                if (base >= 0 && height >= 0) {
                    area = base*height*0.5;
                    cout << "Area of Triangle with base " << base << " and height "
                            << height << ": " << area << endl;
                }
                else {
                    cout << "Please run again and enter positive numbers.\n";
                }
                break;
            case 4: // Quit
                break;
        }
    }
    else {
        cout << "Please run the program again and enter 1-4.\n";
    }

    return 0;
}

