#include <iostream>
using namespace std;

enum YourCards
{
	Ace = 43,
	Jack,
	Queen,
	King
};


int main()
{
	
	cout << "## Question 1 ##" << endl;
	cout << "The value of Queen is: " << Queen << endl;
	cout << "\n" << endl;
	
	cout << "## Question 2 ##" << endl;
	cout << "Size of unsigned integer: " << sizeof(unsigned int) << endl;
	cout << "Size of normal integer: " << sizeof(int) << endl;
	cout << "Size of long integer: " << sizeof(long int) << endl;
	cout << "\n" << endl;

	cout << "## Question 3 ##" << endl;
	cout << "This program calculates the circumference and area of a circle" << endl;
	cout << "Please input the radius: " << endl;

	unsigned int radius;
	cin >> radius;

	const float pi = 22/7;

	cout << "The area of the circle is: " << radius*radius*pi << endl;
	cout << "The circumference of the circle is: " << 2*pi*radius << endl;
	cout << "\n" << endl;

	cout << "Question 4 & 5 Easy and Done" << endl;

	return 0;
}