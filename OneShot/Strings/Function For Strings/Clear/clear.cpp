#include <iostream>
using namespace std;

int main()
{
    /* clear() -
                    Is a built is function used to empty a string.
    */

    string name = "Aditya";
    cout << "Your name: " << name << "Length of name" << " " << name.length() << endl;
    name.clear();
    cout << "Your name after clear: " << name << "Length of name" << " " << name.length() << endl;

    return 0;
}