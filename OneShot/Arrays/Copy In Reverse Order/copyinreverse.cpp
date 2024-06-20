#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int arr2[5];

    for (int i = 0; i < 5; i++)
    {
        int j = 5-1-i;
        arr2[i] = arr[j];
    }

    // arr loop

    cout << "Arr : " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n";

    cout << "Arr2 : " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << arr2[i] << " ";
    }

    cout << "\n";
    return 0;
}