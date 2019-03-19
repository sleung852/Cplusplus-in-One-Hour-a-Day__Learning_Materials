//understanding the null-terminator for C-style string
#include <iostream>
using namespace std;

int main()
{
	char sayHey[]={'H','e','y',' ','Y','o','\0'};
	cout << sayHey << endl;
	cout << "Size of array: " << sizeof(sayHey) << endl;

	cout << "Replacing space with null" << endl;
	sayHey[3] = '\0';
	cout << sayHey << endl;
	cout << "Size of array: " << sizeof(sayHey) << endl;

	return 0;
}