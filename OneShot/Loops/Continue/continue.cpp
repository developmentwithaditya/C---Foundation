#include <iostream>
using namespace std;

int main()
{
    // Continue is used to skip a round for a particular condition

    // Write a program to print numbers 1 to 10 except 5 and 8 using for loop and continue statement

    for (int i = 1; i <= 10; i++)
    {
        if (i != 5 && i != 8)
        {
            cout << i << " ";
        }
        else
        {
            continue;
        }
    }
    cout << "\n";
}