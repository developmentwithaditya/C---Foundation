#include <iostream>
using namespace std;

int main()
{
    /* to_string() -
                     Is a built-in function to convert int to string.
    */

   int x = 12345;
   string str = to_string(x) + "dd";
   cout << "Int to String: " << str << endl; 
    return 0;
}