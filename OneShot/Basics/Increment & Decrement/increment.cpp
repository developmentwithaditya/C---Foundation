#include <iostream>
using namespace std;

int main()
{
    // Post-incrementation
    int x = 2;
    cout << x++ << endl; // x++ --> The statment first use the current value of x and increment it later. So this line od code will be print the value of x = 2.

    cout << x << endl; // 3

    // Pre-incrementation
    cout << ++x << endl; // ++x --> The statment first increment the current value of x by 1 and use it. So this line od code will be print the value of x = 4.

    cout << x << endl; // 4
    return 0;
}