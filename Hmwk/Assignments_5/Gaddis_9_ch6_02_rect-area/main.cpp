/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh Drentlaw
 *
 * Created on February 2, 2018, 10:07 PM
 */

#include <iostream>

using namespace std;

// Function prototypes
void getLength(float &);
void getWidth(float &);
float getArea(float, float);
void displayData(float, float, float);

/*
 * 
 */
int main(int argc, char** argv) {
    // Declare variables
    float length, width, area;
    
    // Get input
    getLength(length);
    getWidth(width);
    area = getArea(length, width);
    
    // Output data
    displayData(length, width, area);
    
    // Exit
    return 0;
}

//****************************************************************
// This function gets the length of the rectangle from the user. *
// It takes the reference variable length as its argument.       *
// It assigns the input to length.                               *
//****************************************************************
void getLength(float &length) {
    do {
        cout << "Please enter the length of a rectangle: ";
        cin >> length;
    } while (length < 1);
}

//***************************************************************
// This function gets the width of the rectangle from the user. *
// It takes the reference variable width as its argument.       *
// It assigns the input to width.                               *
//***************************************************************
void getWidth(float &width) {
    do {
        cout << "Please enter the width of a rectangle: ";
        cin >> width;
    } while (width < 1);
}

//******************************************************
// This function calculates the area of the rectangle. *
// It takes length and width as arguments.             *
// It returns the area as a float.                     *
//******************************************************
float getArea(float length, float width) {
    return length*width;
}

//*************************************************
// This function displays the values.             *
// It takes length, width, and area as arguments. *
//*************************************************
void displayData(float length, float width, float area) {
    cout << "The length is: " << length << endl;
    cout << "The width is: " << width << endl;
    cout << "The area is: " << area << endl;
}
