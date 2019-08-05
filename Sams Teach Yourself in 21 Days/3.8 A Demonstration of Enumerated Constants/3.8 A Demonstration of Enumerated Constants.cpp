#include <iostream>
using namespace std;


int main()
{
	enum Days { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

	Days today;
	today = Monday;

	if (today == Monday || today == Saturday)
	{
		cout << "\nGotta' love the weekends!\n";
	}
	else
	{
		cout << "\nBack to work.\n";
	}
}