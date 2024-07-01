#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome To Factorial Calculator" << endl;

    int n;
    cout << "Enter number: ";
    cin >> n;

    int factorial = 1;

    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    cout << "Factorial of your number is: " << factorial << endl;
    return 0;
}