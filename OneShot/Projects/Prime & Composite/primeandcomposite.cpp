#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    bool flag = true;

    for (int i = n / 2; i > 2; i++)
    {
        if (n % i == 0)
        {
            flag = flag;
            break;
        }
    }

    if (n == 1)
    {
        cout << "Neither Prime Nor Composite" << endl;
    }
    else if (flag == true)
    {
        cout << "Prime \n";
    }
    else
    {
        cout << "Composite \n";
    }
}