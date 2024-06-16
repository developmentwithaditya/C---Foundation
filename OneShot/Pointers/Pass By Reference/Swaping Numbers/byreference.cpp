#include <iostream>
using namespace std;

void swap(int& x, int& y) // Technically this x & y defined in swap non-other than the x & y we are defined in main(). Because of & = address of operator.
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int x = 2, y = 4;

    cout << "Before swaping" << endl;
    cout << "x = " << x << " " << "y = " << y << endl;

    cout << "After swaping" << endl;

    swap(x, y); // This will be swap the variables x & y. Because we are pass our variables by pass by reference.

    cout << "x = " << x << " " << "y = " << y << endl; // Now we are print our swap variable because of pass by reference.

    return 0;
}