//
//  main.cpp
//  Calculator
//
//  Created by August Rsmnerg-Gomez on 9/28/20.
//  Copyright © 2020 August Rsmnerg-Gomez. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

// Write a program that mimics a calculator. The program should take as input two values of type double and
// the operation to be performed. It should then output the numbers, the operator, and the result.


int main() {
    double a = 0.0, b = 0.0;
    char op;
    
    // user instructions for succesful use of program
    cout << "This program allows the user to add, subtract, divide, and multiply any two numbers" << endl;
    cout << "Enter operations in the form: num1 operation num2" << endl;
    cout << "Enter the operation you would like to compute" << endl;
    
    // accept user input of operation they would like to compute
    cin >> a >> op >> b;
    
    switch (op) {
        
        // multiplication case
        // checking for zero might be slower than just multiplying. I am not sure
        // perhaps if we were hard-coding the * operator it would be faster
        // I would be curious to hard code this operator
        case '*':
            if(a == 0 || b == 0){
                cout << 0 << endl;
            } else
                cout << a * b << endl;
            break;
        
        // addition case
        // check for zero, then carry out operation
        // again, this is probably slower in this scenario, but
        // if + was hardcoded rather than included, would be necessary
        case '+':
            if(a == 0){
                cout << b << endl;
            } else if(b == 0){
                cout << a << endl;
            } else{
                cout << a + b << endl;
            }
            break;
        
        // division case
        // check for zero in numerator and denominator (necessary for denominator)
        // if no zeros, carry out division operation
        case '/':
            if(a == 0){
                cout << 0 << endl;
            } else if(b == 0){
                cout << "solution is undefined" << endl;
            } else {
                cout << a / b << endl;
            }
            break;
            
        // subtraction case
        // check for zeros, react appropriately
        // if no zeros, carry out subtraction
        case '-':
            if(a == 0){
                cout << -b << endl;
            } else if(b == 0){
                cout << a << endl;
            } else {
                cout << a - b << endl;
            }
            break;
            
        default:
            cout << "Invalid Operator" << endl;
            break;
    }
    
    return 0;
}
