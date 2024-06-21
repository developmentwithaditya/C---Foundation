#include <iostream>
using namespace std;

void n_One(int n);

int main()
{
    n_One(10);
    return 0;
}

void n_One(int n) // n = 10
{
    if (n == 0) // This is called base-case. Something like terminating condition in loops. This will return(stop) when base-case becomes true.
    {
        return;
    }
    else
    {
        cout << "Count from N to One: " << n << endl;
    }

    n_One(n - 1); // The call will make only 3 times because of base-case.
}
