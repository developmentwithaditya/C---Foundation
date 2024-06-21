#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
string str = "Aditya";
int size_Of_Str = str.length(); // 6
// int i = 0;
// int j = size_Of_Str/2 - 1;

// while (i < j)
// {
//     char temp = str[i];
//     str[i] = str[j];
//     str[j] = temp;
//     i++;
//     j--;
// }

cout << str << endl;

// Method 2:

reverse(str.begin(), str.begin() + 3);
cout << "Reverse of str: " << str << endl;

    return 0;
}