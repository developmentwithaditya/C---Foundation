#include <iostream>
using namespace std;

void one_N(int x, int n);

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    one_N(1, n);
    return 0;
}

// Method 1: Using extra parameter(Parameterised Form)

void one_N(int x, int n) // x = 1, n = input number
{
    if (x > n) // x is used to set the base-case
    {
        return;
    }
    else
    {
        cout << "Count from One to N: " << x << endl;
    }

    one_N(x + 1, n);
}
