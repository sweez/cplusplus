#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Please enter three numbers\n";
    cout << "a: ";
    cin >> a;
    cout << "\nb: ";
    cin >> b;
    cout << "\nc: ";
    cin >> c;

    if (c = (a - b)) // Assign "c" the product of "a - b".
        cout << "a: " << a << " minus b: " << b << " equals c: " << c;
    else
        cout << "a - b does not equal c: ";
    return 0;
}