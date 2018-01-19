/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Josh
 *
 * Created on January 17, 2018, 11:36 PM
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    bool x,y;
    
    //Generate the Heading of the Truth Table
    cout<<"X  Y  !X  !Y  X&&Y  X||Y  X^Y  X^Y^Y  X^Y^X  "
        <<"!(X&&Y)  !X||!Y  !(X||Y)  !X&&!Y"<<endl;
    
    //First Row
    x=true;
    y=true;
    cout<<(x?'T':'F')<<"T ";
    cout<<(y?'T':'F')<<"T  ";
    cout<<(!x?'T':'F')<<"F  ";
    cout<<(!y?'T':'F')<<"F  ";
    cout<<(x&&y?'T':'F')<<"T    ";
    cout<<(x||y?'T':'F')<<"T    ";
    
    //Third Row
    x=true;
    y=true;
    cout<<(x^y?'T':'F')<<"F    ";
    cout<<(x^y^y?'T':'F')<<"T     ";
    cout<<(x^y^x?'T':'F')<<"T      ";
    cout<<(!(x&&y)?'T':'F')<<"F      ";
    cout<<(!x||!y?'T':'F')<<"F       ";
    cout<<(!(x||y)?'T':'F')<<"F      ";
    cout<<(!x&&!y?'T':'F')<<"F";
    cout<<endl;
    
    //Second Row
    x=true;
    y=false;
    cout<<(x?'T':'F')<<"T ";
    cout<<(y?'T':'F')<<"F  ";
    cout<<(!x?'T':'F')<<"F  ";
    cout<<(!y?'T':'F')<<"T  ";
    cout<<(x&&y?'T':'F')<<"F    ";
    cout<<(x||y?'T':'F')<<"T    ";
    
    //Forth Row
    x=true;
    y=false;
    cout<<(x^y?'T':'F')<<"T    ";
    cout<<(x^y^y?'T':'F')<<"T     ";
    cout<<(x^y^x?'T':'F')<<"F      ";
    cout<<(!(x&&y)?'T':'F')<<"T      ";
    cout<<(!x||!y?'T':'F')<<"T       ";
    cout<<(!(x||y)?'T':'F')<<"F      ";
    cout<<(!x&&!y?'T':'F')<<"F";
    cout<<endl;

    //Exit
    return 0;
}

