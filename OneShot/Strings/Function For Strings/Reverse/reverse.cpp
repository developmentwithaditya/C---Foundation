#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* reverse() -
                    Is a built is function used to reverse a string.
    */

    string name = "Aditya";
    cout << "Your name: " << name << endl;
    reverse(name.begin(), name.end());
    cout << "Your name after reverse: " << name << endl;

    return 0;
}