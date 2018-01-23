/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh
 *
 * Created on January 21, 2018, 2:31 PM
 */

//System Libraries Here
#include <iostream>  //I/O Library
#include <cstdlib>   //Random number function
#include <ctime>     //Time Library for random seed
#include <iomanip>   //Format Library
#include <cmath>     //Math Library
#include <fstream>   //File Stream Library
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    int probNum;
    
    //Loop on Menu and problems
    do{
    
        //Menu with input of choice
        cout<<"Choose from the following Menu"<<endl;
        cout<<"Problem 1 -> Gaddis_9thEd_Chap5_Prob01_sum-of-numbers 1"<<endl;
        cout<<"Problem 2 -> Gaddis_9thEd_Chap5_Prob23_pattern-displays 2"<<endl;
        cout<<"Problem 3 -> Gaddis_9thEd_Chap5_Prob13_grt-and-lst 3"<<endl;
        cout<<"Problem 4 -> Gaddis_9thEd_Chap5_Prob21_rand-num-game-enhanced 4"<<endl;
        cout<<"Problem 5 -> Gaddis_9thEd_Chap5_Prob22_square-display 5"<<endl;
        cout<<"Problem 6 -> Gaddis_9thEd_Chap5_Prob16_savings-acct-balance 6"<<endl;
        cout<<"Problem 7 -> Author_Edition_Chapter_Problem_Description 7"<<endl;
        cout<<"Problem 8 -> Author_Edition_Chapter_Problem_Description 8"<<endl;
        cout<<"Problem 9 -> Author_Edition_Chapter_Problem_Description 9"<<endl;
        cout<<"Problem 9 -> Author_Edition_Chapter_Problem_Description 10"<<endl;
        cout<<"Type 1 to 10 only"<<endl<<endl;
        cin>>probNum;
    
        //Output the results
        switch(probNum){
            case 1: {
                // Declare variables
                int n, acc;

                // Initialize values
                acc = 0;

                cout << "Please enter a positive integer: ";
                cin >> n;

                // Validate input
                while (n < 0) {
                    cout << "ERROR! Please enter a positive integer: ";
                    cin >> n;
                }

                // Run calculation
                for (int i = 1; i <= n; i++) {
                    acc += i;
                }

                // Show output
                cout << "The sum of 1-" << n << " = " << acc << ".\n\n";
                break;
            }    
            case 2: {
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

                cout << "-------------\n\n";
                break;
            }
            case 3: {
                // Declare variables
                int getInt, current, testLow, testHigh;

                ofstream writeInt;
                ifstream readInt;

                // Open intFile.txt, the file we'll use to store the integers the user enters
                writeInt.open("intFile.txt");

                cout << "Please enter integers. Enter -99  to end the series.\n";

                // User enters integers
                do {
                    cout << "Enter integer: ";
                    cin >> getInt;

                    writeInt << getInt << endl;
                } while (getInt != -99);

                // Close the write head
                writeInt.close();

                // Open read head on intFile.txt
                readInt.open("intFile.txt");

                // Initialize test variables
                if (readInt) {
                    readInt >> current;
                    testHigh = current;
                    testLow = current;
                }

                // Find largest and smallest integers
                while (current != -99) {
                    testHigh = (current > testHigh) ? current : testHigh;
                    testLow = (current < testLow) ? current : testLow;
                    readInt >> current;
                }

                // Close read head
                readInt.close();

                // Display greatest and lowest values
                cout << "The greatest value is: " << testHigh << endl;
                cout << "The lowest value is: " << testLow << endl;
                break;
            }
            case 4: {
                // Declare variables
                int guess, randNum, guesses;
                bool play = true;

                // Let user play multiple times
                while (play) {
                    // Initialize variables
                    srand(time(0));
                    randNum = (rand() % 100) + 1;
                    guesses = 0;

                    cout << "Welcome to the Random number guessing game!!\n"
                        << "All you need to do is enter a positive integer between 1 and 100.\n\n";

                    // Run game
                    while (guess != randNum) {
                        cout << "Guess the random number: ";
                        cin >> guess;

                        // Guess was too high
                        if (guess > randNum) {
                            cout << "Too high, try again.\n";
                            guesses++;
                        }
                        // Guess was too low
                        else if (guess < randNum) {
                            cout << "Too low, try again.\n";
                            guesses++;
                        }
                        // Guess was just right
                        else {
                            guesses++;
                            cout << "You did it! Good job!\n"
                                    << "The number was " << randNum << ", and it took " << guesses << " guesses.\n";
                        }
                    }

                    cout << "Play again? (1/0) ";
                    cin >> play;
                }
                break;
            }
            case 5: {
                // Declare variable
                int dim;

                // Initialize dim
                cout << "Please enter a number between 1-15: ";
                cin >> dim;

                // Validate dim
                while (dim < 1 || dim > 15) {
                    cout << "Please enter a number between 1-15: ";
                    cin >> dim;
                }

                // Print X in the dimensions specified
                for (int i = 0; i < dim; i++) {
                    for (int j = 0; j < dim; j++) {
                        cout << "X";
                    }
                    cout << endl;
                }
                break;
            }
            case 6: {
                // Declare variables
                float balance, annualInt, monthlyInt, earnedInt, withdraw, deposit;
                int months, withdrawals, deposits;

                // Format cout
                cout.setf(ios::fixed);
                cout.setf(ios::showpoint);
                cout.precision(2);

                // Initialize variables
                cout << "What was the starting balance for the account: $";
                cin >> balance;

                cout << "What is the annual interest rate for your account: ";
                cin >> annualInt;
                annualInt /= 100;
                monthlyInt = annualInt/12; 

                cout << "How many months since the account was established: ";
                cin >> months;

                for (int i = 1; i <= months; i++) {
                    do {
                        cout << "How much was deposited in month " << i << ": $";
                        cin >> deposit;
                    } while (deposit < 0);
                    // Tally deposits
                    deposits += (deposit > 0) ? 1 : 0;

                    do {
                        cout << "How much was withdrawn in month " << i << ": $";
                        cin >> withdraw;
                    } while (withdraw < 0);
                    // Tally withdrawals
                    withdrawals += (withdraw > 0) ? 1 : 0;

                    // Calculate monthly balance
                    balance = (balance+deposit-withdraw)*(1+monthlyInt);
                    // Tally earned interest
                    earnedInt += (balance+deposit-withdraw)*(monthlyInt);

                    if (balance < 0) {
                        break;
                    }
                }

                // Output
                if (balance < 0) {
                    cout << "Your account has a negative balance. Your account has been terminated.\n";
                }
                else {
                    cout << "The current balance is: $" << balance << endl;
                    cout << "Total earned interest:  $" << earnedInt << endl;
                    cout << "Number of deposits:      " << deposits << endl;
                    cout << "Number of withdrawals:   " << withdrawals << endl;
                }
                break;
            }
            case 7: {
                cout<<"Put problem 7 here "<<endl;break;
            }
            case 8: {
                cout<<"Put problem 8 here "<<endl;break;
            }
            case 9: {
                cout<<"Put problem 9 here "<<endl;break;
            }
            default:cout<<"You choose to exit"<<endl;
        }
    }while(probNum>=1&&probNum<=9);
   
    //Exit
    return 0;
}

