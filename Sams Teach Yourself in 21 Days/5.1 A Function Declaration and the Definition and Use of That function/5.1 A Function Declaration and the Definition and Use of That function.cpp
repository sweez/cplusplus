#include <iostream>

int Area(int length, int width); // Function prototype.
using namespace std;

int main()
{



	int lengthOfYard;
	int widthOfYard;
	int areaOfYard;

	cout << "\nHow wide is your yard? ";
	cin >> widthOfYard;
	cout << "\n How long is your yard? ";
	cin >> lengthOfYard;

	areaOfYard = Area(lengthOfYard, widthOfYard);

	cout << "\nYour yard is ";
	cout << areaOfYard;
	cout << " square feet.\n\n";
	return 0;
}

int Area(int len, int wid)
{
	return len * wid;
}

/* Compare the prototype with the definition of the function on line 28. Note that the name, the return type, and the parameter types are the same.
If they were different, a compile error would have been generated. In fact, the only required difference is that the function prototype ends with a semicolon and has no body. */