#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {5, 7, 3, 0, 4, 44, 78, 57, 100, 99, 111, 999, 1000};
    int size_Of_Arr = sizeof(arr) / 4;
    int first_Max = INT_MIN; // 1000
    int second_Max = INT_MIN;

    for (int i = 0; i < size_Of_Arr; i++)
    {
        if (arr[i] > first_Max)
        {
            first_Max = arr[i];
        }
    }

    for (int i = 0; i < size_Of_Arr; i++)
    {
        if (arr[i] != first_Max)
        {
            second_Max = arr[i];
        }
    }

    cout << "Maximum value out of all the elements in arr is: " << first_Max << endl;
    cout << "Second Maximum value out of all the elements in arr is: " << second_Max << endl;
    return 0;
}