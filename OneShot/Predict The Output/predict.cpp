#include <iostream>
using namespace std;

int main()
{
    // In assignment operator the operation is start from right to left. So it will solve as 
    /* 
    x = 10; 
    y = x; 
    */
    int x = 3, y, z;
    y = x = 10; 
    z = x < 10; // This is a comparision of x
    cout << "x = " << x << "\n"<< "y = " << y << "\n" << "z = " << z << "\n";
    return 0;
}