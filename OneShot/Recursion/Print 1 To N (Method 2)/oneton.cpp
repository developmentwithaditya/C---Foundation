#include <iostream>
using namespace std;

void one_N(int x);

int main()
{
    int n;
    cout << "Enter N: ";
    cin >> n;
    one_N(n);
    return 0;
}

// Method 2: After recursive call (work after the call)

void one_N(int n)
{
    if (n == 0)
    {
        return; // base case
    }
    else
    {
        one_N(n - 1); // Recursive call. This will reverse the recursion of  (n to 1) to (1 to n).
        cout << "Count Of one to n: " << n << endl; // work
    }
}