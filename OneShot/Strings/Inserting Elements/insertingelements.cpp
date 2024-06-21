#include <iostream>
#include <limits>
using namespace std;
int main()
{
    string name, address;
    cout << "Enter your name: ";
    cin >> name;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // used to clear the input buffer.

    /*
        cin is only take characters without spaces.
        If you enter your full name with spaces like: Aditya Choudhary.
        This will only get the Aditya.
        Note: To get strings with spaces you want to use getline(cin, name).
    */

    cout << "Enter your address: ";
    getline(cin, address);
    cout << "\n";
    cout << "Your name is: " << name << endl;
    cout << "Your address is: " << address << endl;

    return 0;
}