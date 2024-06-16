#include <iostream>
using namespace std;

int main()
{
    // Pointer is nothing but used to store the address of the variables in computer memory(RAM) we defined in our program. Pointer can access and modify the value of the varible whose address is it store using interection operator = * .

    int x = 3; // 0x7fffffffda94
    int y = 3;
    cout << "Value Of x: " << x << endl;
    cout << "Address of x: " << &x << endl; // & is address of operator that used to get the address of the vraibles in a hexadecimal value.

    cout << "Value Of y: " << y << endl;
    cout << "Address of y: " << &y << endl;

    // Example of storing the address of the variable.

    int *p_X; // int = is now have ability to store a address of variable in hexadecimals value with the help of interection operator = *.
    p_X = &x; // p_X is the name of this pointer and we are assigning the address of x using address of operator = &.

    // Now p_X has the own the value of address of x.

    cout << "Value of p_x: " << p_X << endl;
    cout << "Address of p_x: " << &p_X << endl; // p_X has their own address in memory.
    cout << "Accessing the value of x using interaction operator = *: " << *p_X << endl; // You can also access the value the variable that address store in that pointer called p_X.

    return 0;
}