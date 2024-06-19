#include <iostream>
using namespace std;

int main()
{
   // Inserting elements in a array.

   int arr[4];

   // Method 1: Using indexing

   // Indexing
   arr[0] = 1; // [0] is the 1 element of array.
   arr[1] = 2; // [1] is the 2 element of array.
   arr[2] = 3; // [2] is the 3 element of array.
   arr[3] = 4; // [3] is the 4 last element of array.

   // Method 2: Using for-loop

   cout << "Enter elements: ";

   for (int i = 0; i < 4; i++)
   {
      cin >> arr[i];
   }

   cout << "Your inserted elements is:" << endl;

   for (int i = 0; i < 4; i++)
   {
      cout << arr[i] << " ";
   }

   cout << "\n";

   return 0;
}