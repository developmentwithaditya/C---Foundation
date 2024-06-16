#include <iostream>
using namespace std;

int cal_fact(int x) // calculate the factorial
{
    int calc_factorial = 1;
    for (int i = 1; i <= x; i++)
    {
        calc_factorial *= i;
    }
    return calc_factorial;
}

int nCr(int n, int r) // calculate the combination
{
    int a, b, c, result;
    a = cal_fact(n);
    b = cal_fact(r);
    c = cal_fact(n - r);
    result = a / (b * c);
    return result;
}

void pascalsTriangle(int n) // Printing the pascals triangle
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << nCr(i, j) << "  ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Here is your pascals triangle:" << endl;
    pascalsTriangle(n);
}