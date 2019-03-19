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
    int integer = 3;
    
    //both have the same after effect
    cout << "Result of ++integer: " << ++integer << endl;
    cout << "integer after '++integer' now = " << integer << endl;
    cout << "\n";
    cout << "Result of integer++: " << integer++ << endl;
    cout << "integer after 'integer++' now = " << integer << endl;
    
    return 0;
}
