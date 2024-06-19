#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 5, 5, 45, 34};
    int sum = 0;

    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        sum += arr[i];
    }

    cout << "Sum of array: " << sum << endl;

    return 0;
}