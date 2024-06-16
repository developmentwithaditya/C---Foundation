#include <iostream>
using namespace std;

void starPrinter() // function declaration and their body.
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return;
}

int main()
{
 /*
 Functions is a block of code that execute when call it. It kind of like loop but it can be more efficient then loop.

 Example 1: If you want print star rectangle pattern in your code multiple times using loops:
*/

    cout << "\nStar rectangle pattern using loop:" << endl;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "\n";

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

/*
    Example 2: If you want print star rectangle pattern in your code multiple times using function:
*/
    cout << "Star rectangle pattern using function:" << endl;

    starPrinter(); // This is how you call a function #Pattern: 1 
    cout << "\n";
    starPrinter(); // This is how you call a function #Pattern: 2
    return 0;
}