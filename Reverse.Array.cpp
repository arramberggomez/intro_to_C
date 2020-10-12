//
//  main.cpp
//  Reverse.Array
//
//  Created by August Rsmnerg-Gomez on 10/6/20.
//  Copyright © 2020 August Rsmnerg-Gomez. All rights reserved.
//

#include <iostream>
using namespace std;

// Suppose that intArray is an array of integers, and length specifies the number of elements in intArray.
// Also, suppose that low and high are two integers such that 0 <= low < length, 0 <= high < length, and
// low < high. That is, low and high are two indices in intArray. Implement a recursive function that
// reverses the elements in intArray between low and high.

// function to reverse an array on an interval determined by low, high
void reverse(int foo[], int low, int high)
{
    if(low >= high){        // base case
        return;
    } else {
        int temp = foo[low];
        foo[low] = foo[high];
        foo[high] = temp;
        
        reverse(foo, low + 1, high - 1);        // recursive call
    }
}

// function to print array using for loop
void printarr(int foo[], int len)
{
    for(int i = 0; i < len; i++){
        cout << foo[i] << " ";
    }
    cout << endl;
}



// main function to reverse array
// accepts user input for the length of array, array elements, and interval to reverse on
int main() {
    int foolen;
    cout << "Enter the size of the array you would like to reverse " << endl;
    cin >> foolen;
    int foo[foolen];
    
    // allow user to input the length of the array they want and the individual elements of the array
    // be careful to enter exactly the correct number of elements and press -enter-
    // program is not made to handle extra cin statements
    cout << "Enter the elements of the array " << endl;
    for(int i = 0; i < foolen; i++){
       // cout << "Enter the " << i << " element of the array" << endl;
        int temp;
        cin >> temp;
        foo[i] = temp;
    }
    
    // implement the function
    int low_bound = 0, high_bound = 0;
    cout << "Enter the interval of the array you would like to reverse " << endl;
    cin >> low_bound >> high_bound;
    if(low_bound < 0 || high_bound > foolen){
        cout << "Invalid bounds" << endl;
    }
    
    reverse(foo, low_bound, high_bound);
    
    printarr(foo, foolen);

    return 0;
}
