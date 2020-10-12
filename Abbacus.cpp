//
//  main.cpp
//  Abbacus
//
//  Created by August Rsmnerg-Gomez on 10/9/20.
//  Copyright © 2020 August Rsmnerg-Gomez. All rights reserved.
//

#include <iostream>
using namespace std;

// Function accepts two numbers, num1 and num2
// Function uses a recursive call with repeated addition to compute the product
// Computationally, this function adds num2 to itself num1 times
int mult(int num1, int num2){
    int prod = 0;
    
    if(num1 == 0){      // base case
        return prod;
    
    } else {
        prod = num2 + mult(num1 - 1, num2);     // recursive call
        return prod;
    }
}


// implement the function in the main and accept user input for num1 and num2
int main() {
    int foo = 0, num1 = 0, num2 = 0;
    cout << "Enter two numbers you would like to multiply" << endl;
    cin >> num1 >> num2;
    
    // reduce number of repeated multiplications using if statement below
    if(num1 > num2){
        foo = mult(num2, num1);
    } else {
        foo = mult(num1, num2);
    }
    
    cout << num1 << " x " << num2 << " = " << foo << endl;
    return 0;
}








