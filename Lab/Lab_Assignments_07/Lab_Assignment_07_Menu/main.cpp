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
        cout<<"Problem 1 -> Gaddis_9thEd_Chap5_Prob01_Sum-of-Numbers"<<endl;
        cout<<"Problem 2 -> Gaddis_9thEd_Chap5_Prob23_Pattern-displays"<<endl;
        cout<<"Problem 3 -> Savitch_9thEd_Chap3_Prob7_etox"<<endl;
        cout<<"Problem 4 -> Author_Edition_Chapter_Problem_Description 4"<<endl;
        cout<<"Problem 5 -> Author_Edition_Chapter_Problem_Description 5"<<endl;
        cout<<"Problem 6 -> Author_Edition_Chapter_Problem_Description 6"<<endl;
        cout<<"Problem 7 -> Author_Edition_Chapter_Problem_Description 7"<<endl;
        cout<<"Problem 8 -> Author_Edition_Chapter_Problem_Description 8"<<endl;
        cout<<"Problem 9 -> Author_Edition_Chapter_Problem_Description 9"<<endl;
        cout<<"Type 1 to 9 only"<<endl<<endl;
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
                //Declare Variables
                float aproxE,term,x;
                int counter;

                //Initialize Variables
                aproxE=1.0f;
                counter=1;
                x=1.0f;
                term=x/counter++;

                //Process/Map inputs to outputs
                aproxE+=term;
                cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
                term*=x/counter++;

                //Process/Map inputs to outputs
                aproxE+=term;
                cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
                term*=x/counter++;

                //Process/Map inputs to outputs
                aproxE+=term;
                cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
                term*=x/counter++;

                //Process/Map inputs to outputs
                aproxE+=term;
                cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
                term*=x/counter++;

                //Process/Map inputs to outputs
                aproxE+=term;
                cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
                term*=x/counter++;

                //Process/Map inputs to outputs
                aproxE+=term;
                cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
                term*=x/counter++;

                //Process/Map inputs to outputs
                aproxE+=term;
                cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
                term*=x/counter++;

                //Process/Map inputs to outputs
                aproxE+=term;
                cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
                term*=x/counter++;

                //Output data
                cout<<"e^"<<x<<"       exactly = "<<exp(x)<<endl<<endl;
                break;
            }
            case 4: {
                cout<<"Put problem 4 here "<<endl;break;
            }
            case 5: {
                cout<<"Put problem 5 here "<<endl;break;
            }
            case 6: {
                cout<<"Put problem 6 here "<<endl;break;
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
