#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    int *p_X = &x;
    cout << "Value Of x: " << x << endl;

    // Updating the value of the variable x using pointers

    *p_X = 10; // using interaction operator we can modify the value of the variable x.
    cout << "Value Of x after modify: " << x << endl;

    return 0;
}