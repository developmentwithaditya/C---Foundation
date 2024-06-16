#include <iostream>
using namespace std;

int main()
{
/* 
Hierarchy of +, -, *, /, %

Priority in 1. is: *, /, %
Priority in 2. is: +, -

If we the same priority operator in equavation computer should be follow associativity rule.
In associativity rule computer calculate start form left-to-right like below:
 */

int i = 2 * 3 / 4;
cout << "i = " << i << endl; // This line of code will be print (2 * 3) / 4 = 1
    return 0;
}