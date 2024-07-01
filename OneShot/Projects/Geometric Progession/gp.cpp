#include <iostream>
using namespace std;

int main()
{
    
cout << "Welcome To Geometric Progession Program" << endl;
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int gp = 1;
    for (int i = 1; i <= n; i++)
    {
        cout << "Geometric Progession of 'n' " << gp << endl;
        gp *= 2;
    }
}