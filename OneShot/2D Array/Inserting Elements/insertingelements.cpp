#include <iostream>
using namespace std;

int main()
{
    int arr[2][4];
    int size_Of_Arr = sizeof(arr) / sizeof(arr[0]);
   cout << "Enter elements: ";

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

cout << "Inserted elements are: \n";

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}