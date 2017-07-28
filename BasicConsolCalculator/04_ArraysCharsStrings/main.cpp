#include <iostream>
#include <string>

using namespace std;

int main() {
	//My First C++ Application - Simple Consol Calculator
	float x, y;
	cout << "\n 1st Number: ";
	cin >> x; //First Number Input
	cout << endl <<" 2nd Number: ";
	cin >> y; // Second Number Input
	cout << endl;
	cout << " Press Enter for (ADDITION)";
	string sum; //Not sure why it needed two getline strings to require one "press Enter" prompt
	getline(cin, sum);
	string sum2;
	getline(cin, sum2);
	cout << "\n Sum: " << x + y << endl << "\n Press Enter for (MULTIPLICATION)\n"; //Sum
	string product;
	getline(cin, product);
	cout << " Product: " << x * y << endl << "\n Press Enter for (DIVISION)\n"; //Product
	string division;
	getline(cin, division);
	cout << " Division: " << x / y << endl; //Division
	cout << "\n\n\n Press Enter to EXIT..." << endl;

	//To have the user pressing "Enter" before the consol exits
	string end;
	getline(cin, end);
	return 0;
}