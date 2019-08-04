// 2.4 Using the namespace Keyword.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{

	using namespace std;

	cout << "Hello there.\n";
	cout << "Here is5: " << 5 << "\n";
	cout << "The manipulator endl ";
	cout << "writes a new line to the screen.";
	cout << endl;
	cout << "Here is a very big number:\t" << 70000;
	cout << endl;
	cout << "Here is the sum of 8 and 5:\t";
	cout << 8 + 5 << endl;
	cout << "Here's a fraction: \t\t";
	cout << (float)5 / 8 << endl;
	cout << "And a very very big number:\t";
	cout << (double)7000 * 7000 << endl;
	cout << "Dont forget to replace Jesse Liberty ";
	cout << "with your name...\n";
	cout << "Sweez is a C++ programmer!\n";
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
