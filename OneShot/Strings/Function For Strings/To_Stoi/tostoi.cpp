#include <iostream>
using namespace std;

int main()
{
    /* to_string() -
                     Is a built-in function to convert int to string.
    */

   string str = "12345";
   int num = stoi(str) + 1;
   cout << "String to Int: " << num << endl; 
    return 0;
}