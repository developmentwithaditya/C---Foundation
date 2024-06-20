#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size_Of_Arr = sizeof(arr) / 4;

int i = 0;
int j = size_Of_Arr - 1;

// Reverse of arr[]
while (i < j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    i++;
    j--;
}

for (int i = 0; i < size_Of_Arr; i++)
{
   cout << arr[i] << " "; 
}

cout << "\n";

    return 0;
}