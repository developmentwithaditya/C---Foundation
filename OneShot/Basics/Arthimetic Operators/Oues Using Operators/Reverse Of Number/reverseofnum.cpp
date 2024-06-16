#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    int reverse = 0;

    while (n != 0)
    {
        int last_Digit = n % 10;
        reverse *= 10;
        reverse += last_Digit;
        n /= 10;
    }
    cout << "Reverse of your number is: " << reverse << endl;

    return 0;
}