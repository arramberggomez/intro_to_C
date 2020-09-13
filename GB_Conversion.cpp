//
//  main.cpp
//  foo
//
//  Created by August Rsmnerg-Gomez on 9/11/20.
//  Copyright © 2020 August Rsmnerg-Gomez. All rights reserved.
//

#include <iostream>
using namespace std;

// write a program that accepts user input for the advertised storage capacity of a hard drive
// program returns the actual storage capacity of the hard drive
int main() {
    double conversion;      // double offers 16 significant figures
    float advertised, actual_storage;       // float offers 7 significant figures
    
    conversion = 1073741824;
    
    cout << "Enter the advertised storage capacity of your hard drive:" << endl;
    cin >> advertised;
    
    actual_storage = (advertised * 1000000000)/conversion;      // note that c++ hates division
    
    cout << "The actual storage capacity of your hard drive is " << actual_storage << "GB" << endl;
    
    

    
    return 0;
}
