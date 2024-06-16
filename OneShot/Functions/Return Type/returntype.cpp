#include <iostream>
using namespace std;

int sumOfTwo(int a, int b)
{
    return a + b; // The return keyword is used to terminate a fuction and it also use to return a value of the return type of a function.
}

int main()
{
    cout << "Sum of a + b is: " << sumOfTwo(2, 2) << endl;

    return 0; // This the return value of main function. The return value depends upon function return type in main function the return type is int.
}