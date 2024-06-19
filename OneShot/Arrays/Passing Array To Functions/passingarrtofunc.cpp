#include <iostream>
using namespace std;

void change_Arr(int array[]);

int main()
{
    int arr[4];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;

    cout << "Before Changing: \n";

    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n";

    change_Arr(arr); // Array is pass by reference by default.

    cout << "After Changing: \n";

    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n";

    return 0;
}

void change_Arr(int array[])
{
    array[0] = 4;
    array[1] = 3;
    array[2] = 2;
    array[3] = 1;
}