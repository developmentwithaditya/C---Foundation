#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Welcome To Greatest Number Checker" << endl;

    cout << "Enter number 1: ";
    cin >> a;
    cout << "Enter number 2: ";
    cin >> b;
    cout << "Enter number 3: ";
    cin >> c;

    if (a > b && a > c)
    {
        cout << "The number: " << a << " is greatest" << endl;
    }
    else if (b < a && b < c)
    {
        cout << "The number: " << b << " is greatest" << endl;
    }
    else
    {
        cout << "The number: " << c << " is greatest" << endl;
    }

    return 0;
}