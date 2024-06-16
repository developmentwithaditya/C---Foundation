#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    int sum = 0;

    while (n != 0)
    {
        int last_digit = n % 10;
        n /= 10;
        sum += last_digit;
    }
    cout << "Sum of digits of your number is: " << sum << endl;
    return 0;
}