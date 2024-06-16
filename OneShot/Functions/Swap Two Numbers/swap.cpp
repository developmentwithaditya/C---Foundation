#include <iostream>
using namespace std;

void swap_One(int x, int y)
{
    // Method 1: using a extra variable

    int temp;
    temp = x; // The temp variable is used to store the value of x = 2.
    x = y;
    y = temp;

    cout << "x = " << x << " " << "y = " << y << endl;
}

void swap_Two(int x, int y)
{
    // Method 2: without using a extra variable

    x = x + y; // x = 6
    y = x - y; // y = 2
    x = x - y; // x = 4

    cout << "x = " << x << " " << "y = " << y << endl;
}

int main()
{

    // Before swaping
    int x = 2, y = 4;

    cout << "x = " << x << " " << "y = " << y << endl;
    cout << "After swaping" << endl;

    // After swaping
    cout << "Method 1:" << endl;
    swap_One(2, 4);

    cout << "Method 2:" << endl;
    swap_Two(8, 5);

    return 0;
}