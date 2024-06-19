#include <iostream>
using namespace std;

int main()
{
    // sizeof operator is used get the size of an variables, arrays etc.
    int i;
    char ch;
    float f;
    double d;
    long l;
    bool b;
    string str;
    cout << "Size of int (Bytes): " << sizeof(i) << endl;
    cout << "Size of char (Bytes): " << sizeof(ch) << endl;
    cout << "Size of float (Bytes): " << sizeof(f) << endl;
    cout << "Size of double (Bytes): " << sizeof(d) << endl;
    cout << "Size of long (Bytes): " << sizeof(l) << endl;
    cout << "Size of boolean (Bytes): " << sizeof(b) << endl;
    cout << "Size of string (Bytes): " << sizeof(str) << endl;

    return 0;
}