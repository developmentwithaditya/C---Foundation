#include <iostream>
using namespace std;

int main()
{
    // Method 1:
    // for (int i = 1; i < 100; i++) // This loop is running 100 times
    // {
    //     if (i % 2 == 0)
    //     {
    //         cout << "Even: " << i << endl;
    //     }
    // }

    // Method 2:

    for (int i = 2; i < 100; i += 2) // This loop is running only 50 times. This will reduce the time complexcity of the code and computing power
    {
        cout << "Even: " << i << endl;
    }

    return 0;
}