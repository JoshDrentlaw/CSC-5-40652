/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh
 *
 * Created on January 10, 2018, 8:52 PM
 */

#include <iostream>
#include <string>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    // Declare variables
    string gender, super, food, tv, restart;
    
    // Initialize while loop variable
    bool query = true;
    
    while (query) {
        // Starting question
        cout << "Male or Female?\n";
        cin >> gender;

        // Male branch
        if ((gender == "male") || (gender == "Male")) {
            cout << "Hero or Villain?\n";
            cin >> super;

            // Alignment branch
            if ((super == "hero") || (super == "Hero")) {
                cout << "Steak or Sushi?\n";
                cin >> food;

                // Food Conclusions
                if ((food == "steak") || (food == "Steak")) {
                    cout << "You should get a flat top.\n\n";
                    cout << "Choose again? (1/0)\n";
                    cin >> query;
                }
                else {
                    cout << "You should get a pompadour.\n\n";
                    cout << "Choose again? (1/0)\n";
                    cin >> query;
                }
            }
            else {
                cout << "You should get a mohawk.\n\n";
                cout << "Choose again? (1/0)\n";
                cin >> query;
            }
        }
        // Female branch
        else {
            cout << "Hero or Villain?\n";
            cin >> super;

            // Alignment branch
            if ((super == "hero") || (super == "Hero")) {
                cout << "Anime or Sitcom?\n";
                cin >> tv;

                // TV Conclusions
                if ((tv == "anime") || (tv == "Anime")) {
                    cout << "You should go with bangs.\n\n";
                    cout << "Choose again? (1/0)\n";
                    cin >> query;
                }
                else {
                    cout << "You should get a bob.\n\n";
                    cout << "Choose again? (1/0)\n";
                    cin >> query;
                }
            }
            else {
                cout << "You should get a mohawk.\n\n";
                cout << "Choose again? (1/0)\n";
                cin >> query;
            }
        }
    }
        
    return 0;
}

