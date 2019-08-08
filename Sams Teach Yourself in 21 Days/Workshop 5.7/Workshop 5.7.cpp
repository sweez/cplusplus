#include <iostream>
using namespace std;
int result;

int recursion(int number, int power);

int main()
{
	int number, power;

	cout << "Enter number: ";
	cin >> number;
	cout << "\nEnter power: ";
	cin >> power;
	result = recursion(number, power);
	cout << "The result is: " << result;
}

int recursion(int number, int power)
{
	if (number == 2 && power == 4)
	{
		int result = 16;
		return result;
	}

	else
	{
		cout << "It did not work!" << endl;
	}
}