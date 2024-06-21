#include <iostream>
using namespace std;

int pow(int a, int b);

int main()
{
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << a << " raised to the power of " << b << " is: " << pow(a,b) << endl;
    return 0;
}

int pow(int a, int b) 
{
    if (b == 0)
    {
        return 1;
    }
    else
    {
        return a * pow(a, b - 1);
    }
}