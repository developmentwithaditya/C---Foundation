#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Hello World for " << n << " times" << endl;
    }

    return 0;
}