#include <iostream>
using namespace std;

int main()
{
 int n;

    cout << "Enter Your Number: ";
    cin >> n;

    if (n % 5 == 0 and n % 3 == 0)
    {
        cout << "The number: " <<n << " is divisible by 5 and 3" << endl;
    } else
    {
        cout << "The number: " << n << " is not divisible by 5 and 3" << endl;
    }
    

    return 0;
}