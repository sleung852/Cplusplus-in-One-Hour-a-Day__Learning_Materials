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
    
    if (dayInput == Sunday)
        cout << "Sunday was named after the Sun" << endl;
    else if (dayInput == Monday)
        cout << "Monday was named after the Moon" << endl;
    else if (dayInput == Saturday)
        cout << "da xxxx" <<endl;
    else
        cout << "Error" << endl;
    
    return 0;
    
}
