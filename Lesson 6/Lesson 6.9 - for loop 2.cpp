//
//  Lesson 5.cpp
//  learningCplusplus
//
//  Created by See Ho Leung on 7/3/2019.
//  Copyright © 2019 See Ho Leung. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int someNum[] = {-1, 101, 3, 4};
    
    for (auto aNum: someNum)
    {
        cout << aNum << endl;
    }
    
    return 0;
}
