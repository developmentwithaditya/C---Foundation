#include <iostream>
using namespace std;

void swap(int *a, int *b) // int a will recieve the address of p_X and int y recieve p_Y.
{
  // Interaction operator is used to exract the value of the pointer.
  int temp = *a; // temp = 2 
  *a = *b; // a = 4
  *b = temp; // b = 2
}

int main()
{
    int x = 2, y = 4;
    int *p_X = &x, *p_Y = &y;

    cout << "Before swaping" << endl;
    cout << "x = " << x << " " << "y = " << y << endl;

    cout << "After swaping" << endl;

    swap(p_X, p_Y); // This will be swap the variables x & y. Because we are pass our variables by pass by reference.

    cout << "x = " << x << " " << "y = " << y << endl; // Now we are print our swap variable because of pass by reference.

    return 0;
}