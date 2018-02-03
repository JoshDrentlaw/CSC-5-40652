/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh Drentlaw
 *
 * Created on February 3, 2018, 6:47 AM
 */

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

// Function prototypes
float getSales(string);
void findHighest(float, float, float, float);

/*
 * 
 */
int main(int argc, char** argv) {
    // Declare variables
    string neDiv, seDiv, swDiv, nwDiv;
    
    float neSales, seSales, swSales, nwSales;
    
    // Initialize strings
    neDiv = "Northeast Division";
    seDiv = "Southeast Division";
    swDiv = "Southwest Division";
    nwDiv = "Northwest Division";
    
    // Gather input
    neSales = getSales(neDiv);
    seSales = getSales(seDiv);
    swSales = getSales(swDiv);
    nwSales = getSales(nwDiv);
    
    findHighest(neSales, seSales, swSales, nwSales);

    return 0;
}

/*
 * This function gets the sales figures for specific divisions. 
 * It takes a string representing the division as its argument.
 * It returns the figure the user inputs. 
 */
float getSales(string div) {
    // Declare float that holds the sales figure
    float sales;
    do {
        cout << "Please enter the " << div << "'s quarterly sales figure: $";
        cin >> sales;
    } while (sales < 0);
    return sales;
}

/*
 * This function finds and displays the largest sales figure and the division it belongs to. 
 * It takes the 4 divisions sales figures as arguments.
 */
void findHighest(float ne, float se, float sw, float nw) {
    string div, hiDiv;
    float current;
    float highest = ne;
    
    ofstream recFigs;
    ifstream readFigs;
    recFigs.open("sales-figs.txt");
    
    if (recFigs) {
        recFigs << ne << " Northeast" << endl << se << " Southeast" << endl << sw << " Southwest" << endl << nw << " Northwest" << endl;
        recFigs.close();
        
        readFigs.open("sales-figs.txt");
        
        while (readFigs >> current) {
            readFigs >> div;
            if (current > highest) {
                highest = current;
                hiDiv = div;
            }
        }
        
        cout << "The " << div << " division was the highest: $" << fixed << showpoint << setprecision(2) << highest << endl;
        
        readFigs.close();
    }
    else {
        cout << "Error opening sales-figs.txt" << endl;
    }
}
