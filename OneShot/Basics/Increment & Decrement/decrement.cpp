#include <iostream>
using namespace std;

int main()
{
    // Post-decrementation
    int x = 2;
    cout << x-- << endl; // x++ --> The statment first use the current value of x and decrement it later. So this line od code will be print the value of x = 2.

    cout << x << endl; // 1

    // Pre-decrementation
    cout << --x << endl; // ++x --> The statment first decrement the current value of x by 1 and use it. So this line od code will be print the value of x = 0.

    cout << x << endl; // 0
    return 0;
}