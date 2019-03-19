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
    cout << "Enter two numbers" << endl;
    int num1 = 0, num2 = 0;
    cin >> num1;
    cin >> num2;
    
    int max = (num1 > num2)? num1 : num2;
    cout << "The great of " << num1 << " and " << num2 << " is " << max << endl;
    
    return 0;
}
