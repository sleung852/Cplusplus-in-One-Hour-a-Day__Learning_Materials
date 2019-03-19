//
//  Lesson 5.cpp
//  learningCplusplus
//
//  Created by See Ho Leung on 7/3/2019.
//  Copyright © 2019 See Ho Leung. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    char repeat = 'y';
    while (repeat == 'y')
    {
        cout << "please enter two numbers: " << endl;
        int num1, num2;
        cin >> num1;
        cin >> num2;
        
        cout << "num1 * num2 = " << num1 * num2 << endl;
        cout << "num1 + num2 = " << num1 + num2 << endl;
        
        cout << "do you want to repeat?" <<endl;
        cin >> repeat;
    }
    
    cout << "end!" << endl;
    return 0;
}
