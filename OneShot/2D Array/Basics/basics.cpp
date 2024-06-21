#include <iostream>
using namespace std;

int main()
{
    /* 2D - It is also possible for arrays to have two or more dimensions.
            The two dimensional array is also called matrix.
    */

    /* int arr[r][c]; -
                     This is a 2D array where r depicts number of rows in matrix & c depicts number of columns in the matrix
     */

    /*Example -
                If you want to store the marks of students in P,C,M with their corresponding roll no.
                Here how we can do with 2D array(Matrix).
    */

    // Initialization - [][] / arr[][] = {{1,2,3},{4,5,6},{7,8,9}}

    int arr[4][3];

    // [0] = Student 1 , [0] = subject
    arr[0][0] = 88;
    arr[0][1] = 98;
    arr[0][2] = 68;

    // [1] = Student 2 , [0] = subject
    arr[1][0] = 35;
    arr[1][1] = 78;
    arr[1][2] = 33;

    // [2] = Student 3 , [0] = subject
    arr[2][0] = 76;
    arr[2][1] = 56;
    arr[2][2] = 83;

 // [3] = Student 4 , [0] = subject
    arr[3][0] = 34;
    arr[3][1] = 32;
    arr[3][2] = 65;

    // Updatation
    arr[0][1] = 100;

    // Accessing - for loop / [] / for-each loop

    // [][]
    cout << "Accessing 2D array element using [][] : " << endl;

    cout << arr[0][1] << endl;

    // for-each loop
    cout << "Accessing 2D array element using for-each loop : " << endl;

    for (int(&row)[3] : arr)
    {
        for (int element : row)
        {
            cout << element << " ";
        }
        cout << "\n";
    }

    // for loop
    cout << "Accessing 2D array element using for loop : " << endl;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}