//
//  main.cpp
//  Assn-3
//
//  Created by August Rsmnerg-Gomez on 9/21/20.
//  Copyright © 2020 August Rsmnerg-Gomez. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

//  Write a program that takes user input for the weight of a person in kg
//  Program outputs the weight of person in kg and in pounds
//  All output is to contain two decimal points


int main() {
    // initialize variables for weight in kg, lb, and for the conversion rate
    double kg = 0.0, lb = 0.0, conversion = 2.2;
    
    // set the specified decimal points into the output stream
    // fix all outputs, shows zeros, show two decimal places
    cout << fixed << showpoint << setprecision(2);
    
    // user input of weight in kg
    cout << "Enter weight in kilograms: ";
    cin >> kg;
    
    // find weight in lb using conversion ratio
    lb = conversion * kg;
    
    // output desired values
    cout << "Weight in kilograms: " << kg << "kg" << endl;
    cout << "Weight in pounds: " << lb << "lb" << endl;
    
    
    return 0;
}
