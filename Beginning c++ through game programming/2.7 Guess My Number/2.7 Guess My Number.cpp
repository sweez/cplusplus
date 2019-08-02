// 2.7 Guess My Number.cpp : This file contains the 'main' function. Program execution begins and ends there.
// The classic number guessing game

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int number, guess; //Declare integers
	bool loop1 = true; //Sets loop1 to true to create infinite loop

	srand(time(NULL)); //Tells the program to initialize a random number
	number = rand() % 100 + 1; //Assigns 'number' a randomized number between 1-100

	cout << "***Welcome to the guessing game***" << endl;
	cout << "Please guess the number between 1-100" << endl;
	
	int tries = 0; //Declares the variable 'tries' to keep track of the amount of attempts

	while (loop1 == true) //Creates a loop as long as loop1 is true
	{
		cout << "\nEnter a guess: ";
		cin >> guess; //The user inputs their guess
		++tries; //Each time this is run it will add one point to the 'tries' variable

		if (guess == 1337) //Secret command to get the answer for debugging purposes
		{	
			cout << "The answer is " << number << endl;
		}

		else if (guess > number) //If the guessed number is HIGHER than the randomly generated number then it will output text
		{
			cout << "The answer was too high!";
		}

		else if (guess < number) //If the guessed number is LOWER than the randomly generated number then it will output text
		{
			cout << "The answer was too low!";
		}

		else //If the user correctly guesses the number it will congratulate the player and inform him how many attempts it took
		{
			cout << "Correct, the number was " << number << "! It only took you " << tries << " tries!" << endl;
			break; // Breaks out of the loop and ends the program
		}
	}

	cout << "Thank you for playing!" << endl;
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
