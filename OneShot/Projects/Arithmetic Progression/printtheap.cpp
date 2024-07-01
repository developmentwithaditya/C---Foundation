#include <iostream>
using namespace std;

int main()
{
    // Printing Arithmetic Progression upto 'n'
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= 2 * n - 1; i += 2)
    {
        cout << "Arithmetic Progession Of n: " << i << endl;
    }

    return 0;
}