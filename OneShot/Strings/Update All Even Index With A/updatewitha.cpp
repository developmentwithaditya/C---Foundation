#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter your str: ";
    getline(cin, str);
    int size_Of_Str = str.length();

    for (int i = 0; i < size_Of_Str; i++)
    {
        if (str[i] % 2 == 0)
        {
            str[i] = 'a';
        }
    }
    cout << str << endl;
    return 0;
}