#include <iostream>
using namespace std;

int main()
{
    int a[2][3] = {{9, 4, 2}, {0, 1, 7}};
    int b[2][3] = {{2, 1, 6}, {5, 9, 4}};
    int c[2][3];

for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 3; j++)
    {
        c[i][j] = a[i][j] + b[i][j];
    }
    
}

cout << "Array C: \n";

for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 3; j++)
    {
        cout << c[i][j] << " ";
    }
    cout << "\n";
}

    return 0;
}