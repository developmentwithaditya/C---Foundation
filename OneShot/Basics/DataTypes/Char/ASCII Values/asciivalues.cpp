#include <iostream>
using namespace std;

int main()
{
    // ASCII Values: are a set of unique numerical values assigned to letter, digits, punctuation marks, and other symbol. These value are used to represent text in digit communication and are essential for computer to process and understand human-readable text.

    char letter_a = 'a'; // lowercase letter range from 97 to 122
    char letter_A = 'A'; // Uppercase letter range from 65 to 95
    char num_0 = '0';    // digit range from 48 to 57
    char space = ' ';  // Special characters range from 32 to 126

    cout << "ASCII Value Of a : " << (int)letter_a << endl;
    cout << "ASCII Value Of A : " << (int)letter_A << endl;
    cout << "ASCII Value Of character 0 : " << (int)num_0 << endl;
    cout << "ASCII Value Of Space : " << (int)space << endl;

    return 0;
}