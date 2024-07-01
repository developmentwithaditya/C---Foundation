#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main()
{
    int x = 2, y = 4;
    int *p_X = &x, *p_Y = &y;

    cout << "Before swaping" << endl;
    cout << "x = " << x << " " << "y = " << y << endl;

    cout << "After swaping" << endl;

    swap(p_X, p_Y);

    cout << "x = " << x << " " << "y = " << y << endl;
    return 0;
}