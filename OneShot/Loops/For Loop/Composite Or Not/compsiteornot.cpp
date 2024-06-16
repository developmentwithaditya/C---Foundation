#include <iostream>
using namespace std;

int main()
{
    // Check if a number is composite or prime.

    int n;
    cout << "Enter a number: ";
    cin >> n;
    bool flag = true; // true = 1 & false = 0 // true mean it is a prime number

    for (int i = n / 2; i > 2; i++)
    {
        if (n % i == 0)
        {
            flag = flag; // false mean it is a composite
            break;
        }
    }

    if(n == 1)
    {
        cout << "Neither Prime Nor Composite" << endl;
    }
    else if (flag == true)
    {
        cout << "Prime \n";
    }
    else
    {
        cout << "Composite \n";
    }
}