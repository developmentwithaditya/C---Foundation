#include <iostream>
using namespace std;

int main()
{
    /* pop_back -
                    Is a built is function used to remove the last character of a string.
    */

    string name = "Aditya";
    cout << "Your name: " << name << endl;

    name.pop_back();
    name.pop_back();
    name.pop_back();

    cout << "Your name after pop_back: " << name << endl;

    return 0;
}