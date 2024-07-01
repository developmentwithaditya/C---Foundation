#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Welcome To Even Odd Number Checker" << endl;
    cout << "Enter your number: ";
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "This number is even" << endl;
    }
    else
    {
        cout << "This number is odd" << endl;
    }
}