#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Welcome To Three Digits Number Checker" << endl;
    cout << "Enter Your Number: ";
    cin >> n;

    if (n > 0 && n >= 100 && n < 1000)
    {
        cout << "The number: " << n << " is a three digits number" << endl;
        
    }
    else
    {
        cout << "The number: " <<n << " is not a three digits number" << endl;
        
    }

    return 0;
}