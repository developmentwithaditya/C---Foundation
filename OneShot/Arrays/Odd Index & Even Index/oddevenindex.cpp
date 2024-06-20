#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size_Of_Arr = sizeof(arr) / 4;
    int i;

    for (i = 0; i < size_Of_Arr; i++)
    {
        if (arr[i] % 2 == 0)
        {
            arr[i] *= 2;
        }
        else
        {
            arr[i] += 10;
        }
        
    }

    for (int i = 0; i < size_Of_Arr; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n";

    return 0;
}