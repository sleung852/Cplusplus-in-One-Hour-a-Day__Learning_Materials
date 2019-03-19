//
//  Lesson 2.cpp
//  learningCplusplus
//
//  Created by See Ho Leung on 24/2/2019.
//  Copyright © 2019 See Ho Leung. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    //Declare a variable to store an integer
    int inputNumber;
    
    cout << "Enter an integer: ";
    
    cin >> inputNumber;
    
    cout << "Enter your name: ";
    string inputName;
    cin >> inputName;
    
    cout << inputName << " entered " << inputNumber << endl;
    
    return 0;
}



