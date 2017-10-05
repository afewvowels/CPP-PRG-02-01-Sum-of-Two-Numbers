//
//  main.cpp
//  PRG-2-1-Sum-of-Two-Numbers
//
//  Created by Keith Smith on 10/5/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//

//  Write a program that store the integers 50 and 100 in variables,
//  and stores the sum of these two in a variable named total.

#include <iostream>

using namespace std;

int main() {
    
    // Declare variables
    int num1;
    int num2;
    int total;
    
    // Initialize variables
    num1 = 50;
    num2 = 100;
    
    // Add num1 + num2 for int total
    total = num1 + num2;
    
    // Output to console to verify expression worked as intended
    cout << total << endl;
    
    return 0;
}
