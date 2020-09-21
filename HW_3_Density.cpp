//
//  main.cpp
//  HW_3_Density
//
//  Created by August Rsmnerg-Gomez on 9/21/20.
//  Copyright © 2020 August Rsmnerg-Gomez. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

//  Write a program that accepts input of mass, and density in grams and grams/cm^3 respectively
// program outputs volume as defined by volume = mass/density
// output must contain exactly two decimal points.


int main() {
   // define variables
    double mass = 0.0, density = 0.0, volume = 0.0;
    
    // set all outputs to be to two decimal places
    cout << fixed << showpoint << setprecision(2);
    
    // get user input for mass and density
    cout << "Enter mass in grams: ";
    cin >> mass;
    
    cout << "Enter density in grams/cm^3: ";
    cin >> density;
    
    // compute the volume
    volume = mass / density;
    
    cout << "Volume is: " << volume << "cm^3" << endl;
    
    
    
    
    return 0;
}
