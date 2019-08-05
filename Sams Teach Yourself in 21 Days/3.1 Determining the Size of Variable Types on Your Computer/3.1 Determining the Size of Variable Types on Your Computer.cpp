// 3.1 Determining the Size of Variable Types on Your Computer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	cout << "The size of an int is : \t" 
		<< sizeof(int) << " bytes.\n";
	cout << "The size of a short int is : \t"
		<< sizeof(short) << " bytes.\n";
	cout << "The size of a long int is : \t"
		<< sizeof(long) << " bytes.\n";
	cout << "The size of a char is : \t"
		<< sizeof(char) << " bytes.\n";
	cout << "The size of a float is : \t"
		<< sizeof(float) << " bytes.\n";
	cout << "The size of a double is : \t"
		<< sizeof(double) << " bytes.\n";
	cout << "The size of a bool is : \t"
		<< sizeof(bool) << " bytes.\n";
}

