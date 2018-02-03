/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh Drentlaw
 *
 * Created on February 3, 2018, 9:25 AM
 */

#include <iostream>
#include <fstream>

using namespace std;

// Function prototypes
int getNumAccidents(string);
void findLowest(int, int, int, int, int);

/*
 * 
 */
int main(int argc, char** argv) {
    // Declare variables
    string north, south, east, west, central;
    
    int nAcc, sAcc, eAcc, wAcc, cAcc;
    
    // Initialize strings
    north = "North";
    south = "South";
    east = "East";
    west = "West";
    
    // Gather input
    nAcc = getNumAccidents(north);
    sAcc = getNumAccidents(south);
    eAcc = getNumAccidents(east);
    wAcc = getNumAccidents(west);
    cAcc = getNumAccidents(central);
    
    findLowest(nAcc, sAcc, eAcc, wAcc, cAcc);

    return 0;
}

/*
 * This function gets the number of accidents in a specific area. 
 * It takes a string representing the area as its argument.
 * The user inputs a number of accidents and the function returns that number. 
 */
int getNumAccidents(string area) {
    int accs;
    do {
        cout << "Please enter the number of accidents in the " << area << ": ";
        cin >> accs;
    } while (accs < 0);
    return accs;
}

/*
 * This function finds and displays the area with lowest number of accidents and the number of accidents. 
 * It takes the 5 areas accident counts as arguments.
 */
void findLowest(int n, int s, int e, int w, int c) {
    string area, lowArea;
    int current;
    int lowest = n;
    
    ofstream recAreas;
    ifstream readAreas;
    recAreas.open("areas.txt");
    
    if (recAreas) {
        recAreas << n << " North" << endl << s << " South" << endl << e << " East" << endl << w << " West" << endl << c << " Central" << endl;
        recAreas.close();
        
        readAreas.open("areas.txt");
        
        while (readAreas >> current) {
            readAreas >> area;
            if (current < lowest) {
                lowest = current;
                lowArea = area;
            }
        }
        
        cout << "The " << area << "  had the least amount of accidents with: " << lowest << endl;
        
        readAreas.close();
    }
    else {
        cout << "Error opening areas.txt" << endl;
    }
}
