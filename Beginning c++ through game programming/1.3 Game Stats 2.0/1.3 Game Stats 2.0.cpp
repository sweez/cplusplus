// 1.3 Game Stats 2.0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	unsigned int score = 5000;
	cout << "score: " << score << endl;
	//altering the value of a variable
	score = score + 100;
	cout << "score: " << score << endl;
	//combined assignment operator
	score += 100;
	cout << "score: " << score << endl;
	//increment operators
	int lives = 3;
	++lives;
	cout << "lives: " << lives << endl;
	lives = 3;
	lives++;
	cout << "lives: " << lives << endl;
	lives = 3;
	int bonus = ++lives * 10;
	cout << "lives, bonus = " << lives << ", " << bonus << endl;
	lives = 3;
	bonus = lives++ * 10;
	cout << "lives, bonus = " << lives << ", " << bonus << endl;
	//integer wrap around
	score = 4294967295;
	cout << "\nscore: " << score << endl;
	++score;
	cout << "score: " << score << endl;
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
