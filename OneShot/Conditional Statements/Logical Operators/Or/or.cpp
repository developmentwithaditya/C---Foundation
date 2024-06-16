#include <iostream>
using namespace std;

int main()
{
 int n;

    cout << "Enter Your Number: ";
    cin >> n;

    if (n % 5 == 0 || n % 3 == 0) // || = Is used check one or more conditions has true?
    {
        cout << "The number: " <<n << " is divisible by 5 or 3" << endl; // This block of code will be execute if one or more conditons in if(condition) has true
    } else
    {
        cout << "The number: " << n << " is not divisible by 5 or 3" << endl;
    }
    

    return 0;
}