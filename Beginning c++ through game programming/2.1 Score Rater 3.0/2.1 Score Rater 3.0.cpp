// 2.1 Score Rater 3.0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Demonstrates if else-if else suite

#include <iostream>
using namespace std;

int main()
{
	int score;
	cout << "Enter your score: ";
	cin >> score;

	if (score >= 1000)
	{
		cout << "You scored 1000 or more. Impressive!\n";
	}

	else if (score >= 500)
	{
		cout << "You scored 500 or more. Nice.\n";
	}

	else if (score >= 250)
	{
		cout << "You scored 250 or more. Decent\n";
	}

	else
	{
		cout << "You scored less than 250. Nothing to brag about.\n";
	}
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
