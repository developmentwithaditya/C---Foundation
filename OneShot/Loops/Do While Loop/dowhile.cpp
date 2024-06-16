#include <iostream>
using namespace std;

int main()
{
    // do while loop is similiar as while loop but it will execute first and then ckeck for condition.

    int i = 1;

    // This loop will print i for 1 time

    do
    { // Do any work at least one time
        cout << i << endl;
        i++; // Updation
    } while (i < 1); // checking condition

    return 0;
}