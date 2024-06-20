#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {5, 7, 3, 0, 4, 44, 78, 57, 100, 99, 111, 999, 1000};
    int size_Of_Arr = sizeof(arr) / 4;
    int max = INT_MIN; // Minimum value for int.

    for (int i = 0; i < size_Of_Arr; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "Maximum value out of all the elements in arr is: " << max << endl;

    return 0;
}