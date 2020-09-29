//
//  main.cpp
//  Right.Triangle
//
//  Created by August Rsmnerg-Gomez on 9/28/20.
//  Copyright © 2020 August Rsmnerg-Gomez. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;


// In a right triangle, the square of the length of one side is equal to the sum of the squares of the
// lengths of the other two sides. Write a program that prompts the user to enter the lengths of three sides
// of a triangle and then outputs a message indicating whether the triangle is a right triangle.


int main() {
    double a = 0.0, b = 0.0, c = 0.0;
    
    cout << "Enter the three side lengths of a triangle" << endl;
    cin >> a >> b >> c;
    
    // four cases we need to check. First case is below.
    if(a > b && a > c){
        if(a > (b + c)){
            cout << "Sides entered do not form a triangle." << endl;
        } else if(pow(a, 2) == (pow(b, 2) + pow(c, 2))){
                cout << "Specified triangle is a right triangle" << endl;
        } else {
                cout << "Not a right triangle" << endl;
        }
    // second case below
    } else if(b > a && b > c){
        if(b > (a + c)){
            cout << "Sides entered do not form a triangle." << endl;
        } else if(pow(b, 2) == (pow(a, 2) + pow(c, 2))){
                cout << "Specified triangle is a right triangle" << endl;
        } else {
                cout << "Not a right triangle" << endl;
        }
    // third case below
    } else if(c > a && c > b){
        if(c > (a + b)){
            cout << "Sides entered do not form a triangle." << endl;
        } else if(pow(c, 2) == (pow(a, 2) + pow(b, 2))){
                cout << "Specified triangle is a right triangle" << endl;
        } else {
                cout << "Not a right triangle" << endl;
    }
        } else {
            cout << "Not a right triangle" << endl;
        }
        

    return 0;
}
