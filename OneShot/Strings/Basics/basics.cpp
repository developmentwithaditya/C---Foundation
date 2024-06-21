#include <iostream>
using namespace std;

int main()
{
    /* Strings -
                Is a array of characters with a special element called: null('\0').
                It has almost all the properties that arrays have.
                - You can traverse it.
                - You can find the length.
                - You can update it.
                - You can access it.

Note: Strings in a short form of create a array of characters.
    */

    // Decalaration - string keyword/array
    string name;                                  // This is the short form create an array of indiviual characters of name "Madhav".
    char arr[6] = {'M', 'a', 'd', 'h', 'a', 'v'}; // This is the array of indiviual characters of name "Madhav".

    // Initialization
    name = "Madhav";

    // Decalaration + Initialization
    string name_2 = "Aditya";

    // Accessing - cout/for loop
    cout << "Accessing with cout: \n";

    cout << name << "\n";
    cout << name_2 << "\n";

    cout << "Accessing with for loop: \n";

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i];
    }
    cout << "\n";

    return 0;
}