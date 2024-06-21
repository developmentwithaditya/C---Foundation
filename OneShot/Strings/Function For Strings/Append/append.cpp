#include <iostream>
using namespace std;

int main()
{
    /* 
    append() -
                Is a built-in function for strings to attach a string to the end of the another string.
     */

    string name = "Aditya";
    string lastname = "Choudhary";

    cout << "Your name: " << name << endl;
    cout << "Your lastname: " << lastname << endl;
    // cout << "Your fullname: " << name.append(" " + lastname) << endl;

// You can also use + operator to append a string.

cout << "Attach a sting using + operator: " << name + " " + lastname << endl;

    return 0;
}