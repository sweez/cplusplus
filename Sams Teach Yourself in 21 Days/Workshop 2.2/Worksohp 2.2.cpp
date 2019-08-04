#include <iostream>
int Add(int first, int second)
{
	std::cout << "In Add(), received " << first << " and " << second << "\n";
	return (first + second);
}

int Substract(int first, int second)
{
	std::cout << "\nIn Substract(), received " << first << " and " << second << "\n";
	return (first - second);
}

int main()
{
	using std::cout;
	using std::cin;

	cout << "I'm in main()!\n";
	int a, b, c;
	cout << "Enter two numbers: ";
	cin >> a;
	cin >> b;
	cout << "\nCalling Add()\n";
	c = Add(a, b);
	cout << "\nBack in main().\n";
	cout << "c was set to " << c << "\n";
	c = Substract(a, b);
	cout << "\nBack in main().\n";
	cout << "c was set to " << c;
	cout << "\nExiting...\n\n";
	return 0;
}