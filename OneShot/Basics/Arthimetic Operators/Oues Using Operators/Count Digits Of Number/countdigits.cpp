#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    int count = 0;

    while (n > 0)
    {
        n /= 10;
        count++;
    }
    cout << "Digits of your number is: " << count << endl;
    return 0;
}