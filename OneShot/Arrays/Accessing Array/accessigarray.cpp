#include <iostream>
using namespace std;

int main()
{
// You can access the elements of an array using indexing.

int arr[4];

// Method 1: Using element index.

arr[0] = 1;
arr[1] = 2;
arr[2] = 3;
arr[3] = 4; 

cout << "Accessing array elements using indexing:" << endl;

cout << arr[0] << " "; // arr[0] to access the first element of arr. 
cout << arr[1] << " ";
cout << arr[2] << " ";
cout << arr[3] << " ";
cout << "\n";

 // Method 2: Using for-loop

cout << "Accessing array elements using for-loop:" << endl;

 for (int i = 0; i < 4; i++) // We can using arr[i] to travers the whole array and access the each element of the array.
 {
   cout << arr[i] << " ";  
 }
 cout << "\n";
    return 0;
}