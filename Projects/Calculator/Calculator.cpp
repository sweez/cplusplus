// Calculator project to refine my skills
// Requested by JK

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string divider = "==========================================="; //Added the divider as string to save place in the code
	char op;
	float numbOne, numbTwo;
	bool loopa = true;
	bool menuloop = true;

	cout << divider << endl;
	cout << "*** Calculator - version 0.4 ***" << endl;

	while (loopa == true) //Infinite loop, for now
	{
		while (menuloop == true)
		{
			cout << divider << endl;
			cout << "Available operators:" << endl;
			cout << "+ - / *" << endl;
			cout << "Q = If you wish to exit the program" << endl << endl;
			cout << "Please enter one of the operators listed above: ";
			cin >> op;

			if (op == '+' || op == '-' || op == '/' || op == '*')//Makes sure the input is valid
			{
				menuloop = false;
				break;
			}

			else//If it's not valid then error will be thrown at the user
			{
				cout << "Error! Invalid input..\n\n";
			}

		}//END MENULOOP

		if (op == 'q' || op == 'Q') //Checks if op equals to Q, if yes then terminate the program
		{
			cout << "Terminating program.. " << endl;
			loopa = false; //Turns the loop off, allowing it to exit
			break;
		}

		else
		{

			cout << "\nEnter two numbers:" << endl;
			cin >> numbOne >> numbTwo; //User inputs desired values the user wants to be in the equation

			switch (op) //Checks if the variable OP matches any of the allowed operators, if not, send error message
			{
			case '+':
				cout << "\nThe answer is: " << numbOne + numbTwo << endl << endl;
				break;

			case '-':
				cout << "\nThe answer is: " << numbOne - numbTwo << endl << endl;
				break;

			case '/':
				cout << "\nThe answer is: " << numbOne / numbTwo << endl << endl;
				break;

			case '*':
				cout << "\nThe answer is: " << numbOne * numbTwo << endl << endl;
				break;
			
			/* //No longer necessary as the check was moved up to before the switch.
			default: //If no match was found above then the error code will be run.
				cout << "\nError! invalid operator" << endl << endl;
				break;
			*/
			}//END SWITCH
		}//END ELSE
	} //END LOOP
}//END MAIN

/*CHANGELOG 0.1
Program was created

CHANGELOG 0.2
Added loop so users no longer have to restart the program after each equation
Combined line 22 & 23 with each other as the second cin was redundant

CHANGELOG 0.3
Remade the menu system
The user can now escape the program


Changelog 0.4
Cleaned up the code a bit
Moved the check operator check to before the switch
*/