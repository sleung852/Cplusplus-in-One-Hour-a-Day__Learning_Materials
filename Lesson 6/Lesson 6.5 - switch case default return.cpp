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
    enum DayOfWeek
    {
        Sunday = 0,
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday
    };
    
    cout << "Find what days of the week are named after!" << endl;
    cout << "Enter a number for a day (Sunday=0): ";
    
    int dayInput = Sunday;
    cin >> dayInput;
    
    switch (dayInput)
    {
    case Sunday:
        cout << "Sunday was named after the Sun" << endl;
            
    case Monday:
        cout << "Monday was named after the Moon" << endl;
            
    case Saturday:
        cout << "da xxxx" <<endl;
            
    default:
        cout << "Error" << endl;
    }
    return 0;
    
}
