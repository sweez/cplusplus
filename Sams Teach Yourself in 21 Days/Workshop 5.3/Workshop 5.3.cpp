#include <iostream>
using namespace std;

int myFunc(unsigned short int x, unsigned short int y);

int main()
{
	int x, y, result;
	
	cout << "Please enter x: ";
	cin >> x;
	cout << "\nPlease enter y: ";
	cin >> y;

	result = myFunc(x, y);
	cout << result;
}


int myFunc(unsigned short int x, unsigned short int y)
{
	if (y == 0)
	{
		cout << "Error message!\n";
		return -1;
	}
	else
	{
		int result = x / y;
		return result;
	}
}