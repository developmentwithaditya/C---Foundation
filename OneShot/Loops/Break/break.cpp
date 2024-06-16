#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int factor = 1; // storing highest factor
    for (int i = n / 2; i >= 1; i--)
    {
        if (n % i == 0)
        {
            factor = i;
            break; // This will force fully exit the loop. When if condition is true.
        }
    }
    cout << "Highest factor of n: " << factor << endl;
}