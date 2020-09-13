//
//  main.cpp
//  Gravitaional_Force
//
//  Created by August Rsmnerg-Gomez on 9/13/20.
//  Copyright © 2020 August Rsmnerg-Gomez. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

// Design a program that accepts user input for the mass of two objects in space and the distance
// between the center of mass of the two objects. Program computes the gravitational force
// acting between the two objects.
int main() {
    float mass1, mass2, dist, g_const, g_force;      // initialize variables
    
    g_const = 6.674 * pow(10, -11);     // define universal gravitational constant
    
    cout << "Enter the masses of two bodies in KG" << endl;
    cin >> mass1 >> mass2;
    
    cout << "Enter the distance between the center of masses of the two objects in meters" << endl;
    cin >> dist;
    
    g_force = g_const * ((mass1 * mass2)/pow(dist, 2));
    
    cout << "The gravitational force between the two bodies is " << g_force << " N" << endl;
    
    
    return 0;
}
