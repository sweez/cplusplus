// 1.3 Game Stats 3.0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	const int ALIEN_POINTS = 150;
	int aliensKilled = 10;
	int score = aliensKilled * ALIEN_POINTS;
	cout << "score: " << score << endl;
	enum difficulty { NOVICE, EASY, NORMAL, HARD, UNBEATABLE };
	difficulty myDifficulty = EASY;
	enum shipCost { FIGHTER_COST = 25, BOMBER_COST, CRUISER_COST = 50 };
	shipCost myShipCost = BOMBER_COST;
	cout << "\nTo upgrade my ship to a Cruiser will cost "
		<< (CRUISER_COST - myShipCost) << " Resource Points.\n";
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
