#include <iostream>
using namespace std;

int add(int a, int b);
int add(int a, int b, int c);

int main()
{
    // Function Overloading - is different version of the same function with different paramenters.

    /* Example: add_of_two
                add_of_three

    If we call add() with two parameter it will retuen a+b Or  If we call the same add() with three parameter it will retuen a+b+c
    */

    int add_Of_Two = add(2, 4);      // This is first version of add() with the paramenter of 2 integers.

    int add_Of_Three = add(2, 4, 8); // This is Second version of add() with the paramenter of 3 integers.

    cout << "Addition of two numbers is: " << add_Of_Two << endl;
    cout << "Addition of three numbers is: " << add_Of_Three << endl;

    return 0;
}

int add(int a, int b)
{
    return a + b;
}

int add(int a, int b, int c)
{
    return a + b + c;
}