#include <iostream>
using namespace std;

void swap(int x, int y) // New variables that store the value of x & y we defined in main().
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

    swap(x, y); // This will not swap because we are passing our variables x, y by pass by value. The value of x=2 & y=4 is copy from the new variable in swap function called x,y.

    cout << "x = " << x << " " << "y = " << y << endl; // The value after swaping the x,y remain same because we are not access the variables defined in swap(). Because of scope of the variable.

    return 0;
}