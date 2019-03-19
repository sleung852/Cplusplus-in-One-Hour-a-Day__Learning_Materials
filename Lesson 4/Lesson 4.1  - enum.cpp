#include <iostream>
using namespace std;

enum CardinalDirections
{
	North = 25,
	South,
	East,
	West
};

int main()
{
	cout << "Displaying directions and their symbolic values" << endl;
	cout << "North: " << North << endl;
	cout << "South: " << South << endl;

	CardinalDirections windDirection = South;
	cout << "windDirection: South -> " << windDirection << endl;

	return 0;
}