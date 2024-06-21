#include <iostream>
using namespace std;

int main()
{
    /* push_back -
                    Is a built is function used to append a character with the last character of a string.
        Note:       String hav "variable size" means you can change it as you want it.
    */

    string name = "Adity";
    cout << "Your name: " << name << endl;
    name.push_back('a');
    cout << "Your name after push_back: " << name << endl;

    return 0;
}