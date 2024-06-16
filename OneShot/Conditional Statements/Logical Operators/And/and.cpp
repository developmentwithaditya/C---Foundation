#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Your Number: ";
    cin >> n;

    if (n > 0 && n >= 100 && n < 1000) // && = Is used check two or more conditions has true?
    {
        cout << "The number: " << n << " is a three digits number" << endl; // This block of code will be execute if all in if(conditons) block has true
        
    }
    else
    {
        cout << "The number: " <<n << " is not a three digits number" << endl;
        
    }

    return 0;
}