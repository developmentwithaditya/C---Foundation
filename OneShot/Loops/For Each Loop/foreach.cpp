#include <iostream>

int main()
{
    // foreach loop - loop  that eases the traversal over an
    //                iterable data set ex: array

    // foreach loop is start with first index and travers to the ending index.

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int arr : arr)
    {
        std::cout << arr << " ";
    }

    std::cout << "\n";
    return 0;
}