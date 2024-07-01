#include <iostream>
using namespace std;

int main()
{
    int n;

    int a, b, c;
    cout << "Enter side A: ";
    cin >> a;
    cout << "Enter side B: ";
    cin >> b;
    cout << "Enter side C: ";
    cin >> c;

    int sum_Of_AB = a + b;
    int sum_Of_BC = b + c;
    int sum_Of_CA = c + a;

    if (sum_Of_AB > c && sum_Of_BC && a && sum_Of_CA > b)
    {
        cout << "This is a valid triangle" << endl;
    }
    else
    {
        cout << "This is a invalid triangle" << endl;
    }

    return 0;
}