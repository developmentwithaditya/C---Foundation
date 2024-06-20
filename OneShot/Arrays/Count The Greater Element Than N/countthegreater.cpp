#include <iostream>
#include <climits>
using namespace std;

int main()
{
    // Count The Greater Elements Than N.
    int arr[] = {1,3,0,10,2,5,6};
    int size_Of_Arr = sizeof(arr) / 4;
    int n = 4; // Given number N.
    int count = 0;

for (int i = 0; i < size_Of_Arr; i++)
{
    if (arr[i] > n)
    {
        count++;
    }
}

cout << "Elements greater that N: " << count << endl;

    return 0;
}