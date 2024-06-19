#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    // Reverse of arr:
    cout << "Reverse of array" << endl;

    for (int i = 4; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }

    cout << "\n";

    return 0;
}