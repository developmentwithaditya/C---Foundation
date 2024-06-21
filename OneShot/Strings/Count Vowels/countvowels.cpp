#include <iostream>
using namespace std;

int main()
{
    string str = "cow is a animal four legs";
    int size_Of_Str = str.length();
    cout << "Enter your string: ";
    // cin >> str;
    int count_Vowels = 0;

    for (int i = 0; i < size_Of_Str; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count_Vowels++;
        }
    }
    cout << "Vowels count in given string: " << count_Vowels << endl;
    
    return 0;
}