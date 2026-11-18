#include <iostream>
using namespace std;

int main()
{
	// Find largest of three numbers
	int a = 12;
	int b = 88;
	int c = 66;

	if (a >= b && a >= c)
		cout << "a is largest\n";
	else if (b >= a && b >= c)
		cout << "b is largest\n";
	else
		cout << "c is largest\n";

	// Read a day number and print the weekday
	int day;
	cout << "enter the number (1-7): ";
	if (!(cin >> day)) {
		cout << "invalid input\n";
		return 1;
	}

	switch (day) {
		case 1: cout << "monday\n"; break;
		case 2: cout << "tuesday\n"; break;
		case 3: cout << "wednesday\n"; break;
		case 4: cout << "thursday\n"; break;
		case 5: cout << "friday\n"; break;
		case 6: cout << "saturday\n"; break;
		case 7: cout << "sunday\n"; break;
		default: cout << "enter the number between 1 to 7\n"; break;
	}

	return 0;
}
