#include <iostream>
using namespace std;

int main()
{
    // Scope of variable is a thing in which a variable cannot be acces and modify outside its block like:

    /*     In below code variable i is cannot be access and modify outside for loop body. Because variable i is defined inside the for loop body.

    */

    for (int i = 0; i <= 5; i++)
    {
        cout << "Hello i" << endl;
    }

   // cout << i << endl; // This is throw error

    /* If you want to access variable i outside for loop body you can define i globaly like: */

int i; // The variable i is now difine globaly

     for (i = 0; i <= 5; i++)
    {
        cout << "Hello i" << endl;
    }

    cout << i << endl; // This will now access and modify.

    return 0;
}