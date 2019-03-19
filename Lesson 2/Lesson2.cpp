//
//  Lesson 2.cpp
//  learningCplusplus
//
//  Created by See Ho Leung on 24/2/2019.
//  Copyright © 2019 See Ho Leung. All rights reserved.
//

// Preprocessor directive that includes hear iostream
#include <iostream>

// Start of your program: function block main()
int main()

/*
 also you can do this:
 int main (int argc, char* argv[])
 to enable the program to be runned in command-line
*/

{
    /* Write to the screen
     cout stands for console-out
     cout is defined in standard namespace
     hence-> std::cout
     
     another example would be std::fstream
     
     why need the namespace std?
     because if another fstream exist, then the compiler won't know which one should be invoked
     */
    std::cout << "Hello World" << std::endl;
    
    // Return a value to the OS
    return 0;
}

/* or Alternatively to make it easier to
tell the compiler where to find the namespaec */

#include <iostream>

int main()
{
    using namespace std;

    cout << "Hello World" << endl;

    return 0;
}

//or to be more explicit

#include <iostream>

int main()
{
    using std::cout;
    using std::endl;

    cout << "Hello World" << endl;

    return 0;
}

//#### example of using a function #### //

#include <iostream>
using namespace std;

// Declare a function
int DemoConsoleOutput();

int main()
{
    //Call i.e. invoke the function
    DemoConsoleOutput();
    return 0;
}

int DemoConsoleoutput();
{
    cout << "This is a simple string literal" << endl;
    cout << "Writing number five: " << 5 << endl;
    cout << "Performing division 10/5 = " << 10/5 << endl;
    cout << "Pi when approxiated is 22/7 = " << 22/7 << endl;
    cout << "Pi is 22/7 = " << 22.0/7 << endl;

    return 0;
}

//#### a much better way: using return value of a function #### //

#include <iostream>

using namespace std;

// function declaration and definition
int DemoConsoleoutput()
{
    cout << "Hello World" << endl;
    cout << 5*3 << endl;
    cout << 2.0/3 << endl;

    return 0;
}

int main()
{
    return DemoConsoleOutput();
}

//in cases where you do not need a function to return
//a success or failure status

void DemoConsoleoutput()

//Listing 2.6//

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

    cout << inputName << " entered " << inputNUmber << endl;

    return 0;
}

