#include <iostream>
using namespace std;

int main()
{
    // GP - 1,2,4,8,16,32.. upto 'n'

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int gp = 1;
    for (int i = 1; i <= n; i++)
    {
        cout << "Geometric Progession of 'n' " << gp << endl;
        gp *= 2;
    }
}