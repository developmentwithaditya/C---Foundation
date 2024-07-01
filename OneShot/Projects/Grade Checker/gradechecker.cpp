#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Welcome To  Grade Checker" << endl;
    cout << "Enter your exam number: ";
    cin >> n;

    if (n >= 81 && n <= 100)
    {
        cout << "Very Good" << endl;
    }
    else if (n >= 61 && n <= 80)
    {
        cout << "Good" << endl;
    }
    else if (n >= 41&& n <= 60)
    {
        cout << "Average" << endl;
    }
    else
    {
        cout << "Fail!" << endl;
    }

    return 0;
}