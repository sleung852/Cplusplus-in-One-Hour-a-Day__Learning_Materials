//
//  Lesson 5.cpp
//  learningCplusplus
//
//  Created by See Ho Leung on 5/3/2019.
//  Copyright © 2019 See Ho Leung. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "Enter two integers: " << endl;
    int num1 = 0, num2 = 0;
    cin >> num1;
    cin >> num2;
    
    cout << "Enter 'd' to divide, anything else to multiply: ";
    char userSelection = '\0';
    cin >> userSelection;
    
    if (userSelection == 'd')
    {
        cout << "You wish to divide!" << endl;
        if (num2 != 0)
            cout << num1 << "/" << num2 << "=" << num1/num2 << endl;
        else
            cout << "Cannot divide 0" << endl;
    }
    else
        cout << num1 << "*" << num2 << "=" << num1 * num2;
    
    return 0;
}
