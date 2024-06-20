#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {5, 7, 3, 2, 4, 44, 78, 57, 100, 99, 111, 999};
    int size_Of_Arr = sizeof(arr) / 4;
    int min = INT_MAX; // Maximum value of int

    for (int i = 1; i < size_Of_Arr; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << "Minmum value out of all the elements in arr is: " << min << endl;

    return 0;
}