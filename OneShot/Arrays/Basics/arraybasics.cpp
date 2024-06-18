#include <iostream>
using namespace std;

int main()
{
    /* Array is a data sturcture used to declare multiple variable with same data type and same identifier in a continuse memory.
  * int is the datatype of arr.
  * arr is a identifier.
  * [] is used to declared a list of element(array). like: 1,2,3..
  * array indexing start from 0.
  * [5] is the size of array.

*/
    // Declaration of an array list of 5 intergers.

    // method 1:

    // Declaration
    int arr[4];

    // Intialization
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;

    // Updation
    arr[0] = 0;

    // Method 2:

    // Declaration & Initailization in same line:
    int arr[5] = {1,
                  2,
                  3,
                  4,
                  5}; // It does not required to define the size array if know how many element you want to add.

    return 0;
}