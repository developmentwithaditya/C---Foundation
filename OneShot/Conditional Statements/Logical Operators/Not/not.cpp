#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Your Number: ";
    cin >> n;

    if ((n % 5 == 0 or n % 3 == 0) && !(n % 15 == 0)) // ! = Is used check is conditions one or more not true?
    {
        cout << "The number: " << n << " is divisible by 5 or 3 but not 15" << endl; // This block of code will be execute if above if(conditions) has true.
    }
    else
    {
        cout << "The number: " << n << " is not divisible by 5 or 3" << endl;
    }

    return 0;
}